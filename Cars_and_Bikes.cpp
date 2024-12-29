#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    if(N%4 > 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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