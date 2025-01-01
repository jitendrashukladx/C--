#include <bits/stdc++.h>

using namespace std;

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    int count = 0, sum = 0;
    while(r < n) {
        sum += arr[r];
        //cout << sum << " " << l << " " << r << endl;
        
        while(l <= r && sum > x) {
            
            sum -= arr[l++];
            //cout << "\tinside while " << sum << " " << l << " " << r << endl; 
        }
        if(sum == x) {
            count++;
            sum = sum - arr[l];
            l++;
        }
        r++;
    }
    cout << endl << count;
    return 0;
}