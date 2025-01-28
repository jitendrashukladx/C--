#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<long long> nums(n-1);
    for(auto &it : nums) {
        cin >> it;
    }

    long long sum = (n * (n+1)) /2 ;
    //cout << sum << endl;
    long long partSum = 0;
    for(auto &it : nums) {
        partSum += it;
    }
    //cout << partSum << endl;
    long long missingNum = sum - partSum;
    cout << missingNum;
    return 0;
}