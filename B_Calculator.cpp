#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string S;
    cin >> S;
    int conZero = 0, zeroCount = 0;

    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '0' && S[i+1] == '0') {
            conZero++; i++;
        } else
            zeroCount++;
    }

    int ans = zeroCount + conZero;

    cout << ans << endl;
    
    return 0;
}