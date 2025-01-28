#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long  N, X;
    cin >> N >> X;
    vector<long long> H(N);
    for(int i = 0;i < N; i++)
        cin >> H[i];
    sort(H.begin(), H.end());
    long long max_attack_needed = 0;
    int days = 0;
    for(int i = N-1; i >= 0; i--) {
        max_attack_needed = max(max_attack_needed, H[i] + days*X);
        days++;
    }
    cout << max_attack_needed << endl;
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