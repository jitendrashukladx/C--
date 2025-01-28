#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;

    string code = "WECNITK";
    if(code.compare(s) == 0)
        cout << "Welcome to Web Club!";
    else
        cout << "Access denied";
    return 0;
}