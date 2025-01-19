#include <bits/stdc++.h>

using namespace std;

int maxSubarraySum(const vector<int>& arr) {
    int maxSum = arr[0], currentSum = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int minimizeMaxSubarraySum(int n, const vector<int>& arr) {
    vector<int> positives, negatives;
    
    for (int num : arr) {
        if (num >= 0) {
            positives.push_back(num);
        } else {
            negatives.push_back(num);
        }
    }
    
    vector<int> merged;
    size_t posIdx = 0, negIdx = 0;
    
    bool insertPositive = !positives.empty();
    
    while (posIdx < positives.size() || negIdx < negatives.size()) {
        if (insertPositive && posIdx < positives.size()) {
            merged.push_back(positives[posIdx++]);
        } else if (!insertPositive && negIdx < negatives.size()) {
            merged.push_back(negatives[negIdx++]);
        }
        insertPositive = !insertPositive;
    }
    
    return maxSubarraySum(merged);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        int ans = minimizeMaxSubarraySum(N, A);
        if(ans < 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    
    return 0;
}