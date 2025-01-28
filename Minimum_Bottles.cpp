#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> bottles(n);
    for(int i = 0; i < n; i++)
        cin >> bottles[i];
    
    int totalWater = 0;
    for(int b : bottles) {
        totalWater += b;
    }
    if(totalWater <= x)
        cout << 1 << endl;
    else {
        int ans = totalWater/x;
        if(totalWater % x != 0)
            ans++;
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;

    while(T--)
        solve();
    return 0;
}