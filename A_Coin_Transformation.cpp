#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ans = 1;

        while(n > 3) {
            n = n - 3;
            ++ans;
        }
        cout << ans << endl; 
    }
    return 0;
}