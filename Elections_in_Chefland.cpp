#include <bits/stdc++.h>
using namespace std;

int solve() {
    int N, X;
    cin >> N >> X;
    vector<int> voters(N);
    for(int i = 0; i < N; i++) {
        cin >> voters[i];
    }

    int ans = 0;
    for(int v : voters) {
        if(v >= X)
            ans++;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
        cout << solve() << endl;
    return 0;
}