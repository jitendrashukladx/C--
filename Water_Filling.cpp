#include<bits/stdc++.h>

using namespace std;

void solve() {
    int A, B, C;
    cin >> A >> B >> C;

    if(A+B+C <= 1)
        cout << "Water filling time\n";
    else
        cout << "Not now\n";
}

int main() {
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}