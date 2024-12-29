#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, X;
    int ans = 0;
    cin >> N >> X;

    if(N % 3 == 0) {
        ans = (N/3) * X * 2;
    } else {
        ans = ((N/3) * X * 2) + (N%3 * X);
    }

    cout << ans << endl;
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