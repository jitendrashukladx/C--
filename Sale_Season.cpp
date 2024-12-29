#include <bits/stdc++.h>

using namespace std;

void solve() {
    int X;
    cin >> X;

    if(X <= 100)
        cout << X << endl;
    else if(X > 100 && X <= 1000) 
        cout << X-25 << endl;
    else if(X > 1000 && X <= 5000)
        cout << X-100 << endl;
    else
        cout << X-500 << endl;
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