#include <bits/stdc++.h>

using namespace std;

void solve() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    unordered_map<int, int> freq;
    freq[A]++;
    freq[B]++;
    freq[C]++;
    freq[D]++;

    if(freq.size() == 2)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    //cin >> T;
    T = 1;
    while(T--)
        solve();
    return 0;
}