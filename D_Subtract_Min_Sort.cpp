#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                possible = false;
                break;
            }
            int mini = min(a[i], a[i-1]);
            a[i] -= mini;
            a[i-1] -= mini;
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
