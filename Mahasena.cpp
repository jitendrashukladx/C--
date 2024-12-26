#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    int soldiers[N];

    for(int i = 0; i < N; i++) {
        cin >> soldiers[i];
    }

    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < N; i++) {
        if(soldiers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    string ans = (evenCount > oddCount) ? "READY FOR BATTLE" : "NOT READY";
    cout << ans;
}