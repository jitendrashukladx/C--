#include<bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> booksReturned(N);
    
    for(int i = 0; i < N; i++)
        cin >> booksReturned[i];
    
    map<int, int> maxPenalty;

    for(int i = 0; i < N; i++) {
        if(maxPenalty.find(booksReturned[i]) == maxPenalty.end())
            maxPenalty[booksReturned[i]] = i+1;
        else {
            maxPenalty[booksReturned[i]] = max(maxPenalty[booksReturned[i]], i+1);
        }
    }

    long long totalPenalty = 0;
    for(auto &it : maxPenalty) {
        totalPenalty += it.second;
    }

    cout << totalPenalty << endl;
}

int main() {
    int T ;

    cin >> T;

    while(T--) solve();

    return 0;
}