#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> optimalScore(int t, vector<pair<int, int>> &nk, vector<vector<int>> &arrays) {
    vector<int> results;

    for (int test = 0; test < t; ++test) {
        int n = nk[test].first;
        int k = nk[test].second;
        vector<int> &x = arrays[test];

        // Frequency map to count occurrences
        unordered_map<int, int> freq;
        for (int num : x) {
            freq[num]++;
        }

        int score = 0;

        for (auto &it : freq) {
            int num = it.first;
            int count = it.second;
            int complement = k - num;
            if (freq.find(complement) != freq.end()) {
                int pairs = min(count, freq[complement]);
                if (num == complement) {
                    pairs /= 2; // Special case: self-pair
                }
                score += pairs;

                // Decrease frequencies
                freq[num] -= pairs;
                freq[complement] -= pairs;
            }
        }

        results.push_back(score);
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> nk(t);
    vector<vector<int>> arrays(t);

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        nk[i] = {n, k};
        arrays[i].resize(n);
        for (int j = 0; j < n; ++j) {
            cin >> arrays[i][j];
        }
    }

    vector<int> results = optimalScore(t, nk, arrays);

    for (int score : results) {
        cout << score << "\n";
    }

    return 0;
}