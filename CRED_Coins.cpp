#include <iostream>

using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;

    cout << (X*Y) / 100 << endl;
}

int main() {
    ios::sync_with_stdio(false)
    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}