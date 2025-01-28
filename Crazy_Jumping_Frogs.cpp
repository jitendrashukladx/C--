#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> frogs(N);
    for (int i = 0; i < N; ++i) {
        cin >> frogs[i];
    }

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < N; ++i) {
        if (frogs[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    int maxi = max(evenCount, oddCount);
    cout << maxi << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}