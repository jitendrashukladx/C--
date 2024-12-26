#include<bits/stdc++.h>

using namespace std;

void solve(vector<long long int>& array, vector<vector<long long int>>& queries) {
    vector<long long int> prefixSum(array.size()+1);
    prefixSum[0] = 0;

    for(int i = 0; i < array.size(); i++) {
        prefixSum[i+1] = prefixSum[i] + array[i];
    }
    
    //calculate the queries and
    for(int i = 0; i < queries.size(); i++) {
        int low = queries[i][0] - 1;
        int high = queries[i][1];
        cout << prefixSum[high] - prefixSum[low] << endl;
    }
}

int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long int> array(n);
    vector<vector<long long int>> queries(q, vector<long long int>(2));

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for(int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    solve(array, queries);

    return 0;
}
