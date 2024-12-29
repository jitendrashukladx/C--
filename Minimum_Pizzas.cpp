#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, X;
    cin >> N >> X;
    double pizza = (double) (N*X) / 4.0;
    cout << ceil(pizza) << endl;
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