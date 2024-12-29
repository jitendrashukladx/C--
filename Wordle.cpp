#include <bits/stdc++.h>

using namespace std;

void solve() {
    string S, T;
    cin >> S >> T;
    string ans;
    for(int i = 0; i < max(S.size(), T.size()); i++) {
        if(S[i] == T[i])
            ans += "G";
        else
            ans += "B";
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