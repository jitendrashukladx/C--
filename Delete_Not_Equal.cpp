#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> hash(s.begin(), s.end());
    if(hash.find('0') != hash.end() && hash.find('1') != hash.end()) {
        cout << "1\n";
    } else {
        cout << n << endl;
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