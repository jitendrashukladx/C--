#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> solve(int T, const vector<pair<int, vector<int>>>& testCases) {
    vector<long long> results;
    for (const auto& testCase : testCases) {
        int n = testCase.first;
        const vector<int>& temperatures = testCase.second;
        long long imbalance = 0;
        long long totalSeconds = 0;

        for (int temp : temperatures) {
            imbalance += temp;
            totalSeconds += abs(imbalance);
        }
        results.push_back(totalSeconds);
    }
    return results;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<pair<int, vector<int>>> testCases;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> temperatures(N);
        for (int i = 0; i < N; ++i) {
            cin >> temperatures[i];
        }
        testCases.emplace_back(N, temperatures);
    }

    vector<long long> results = solve(T, testCases);

    for (long long result : results) {
        cout << result << '\n';
    }

    return 0;
}
