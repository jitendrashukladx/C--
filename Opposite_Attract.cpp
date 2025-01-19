#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    string str;
    cin >> str;

    string ans="";
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '0')
            ans += '1';
        else
            ans += '0';
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