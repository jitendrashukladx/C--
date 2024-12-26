#include <iostream>
using namespace std;

void solve() {
    int H, L, W;
    
    cin >> H >> L >> W;
    
    long long volume = 2 * (H*L + L*W + W*H);

    cout << 1000 / volume << endl;;
}

int main() {
	// your code goes here
	int T;
	
	cin >> T;
	
	while(T--) solve();
	return 0;
}
