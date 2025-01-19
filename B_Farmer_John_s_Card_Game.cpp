#include <bits/stdc++.h>

using namespace std;

bool canPlay(const vector<vector<int>>& decks, vector<int>& order) {
    int n = decks.size();
    vector<int> indices(n, 0);
    int top_card = -1;

    for (int round = 0; round < decks[0].size(); ++round) {
        for (int cow : order) {
            while (indices[cow] < decks[cow].size() && decks[cow][indices[cow]] <= top_card) {
                indices[cow]++;
            }
            if (indices[cow] == decks[cow].size()) {
                return false;
            }
            top_card = decks[cow][indices[cow]++];
        }
    }
    return true;
}

vector<int> findValidOrder(int n, const vector<vector<int>>& decks) {
    vector<int> order(n);
    iota(order.begin(), order.end(), 0);

    sort(order.begin(), order.end(), [&](int a, int b) {
        return decks[a][0] < decks[b][0];
    });

    if (canPlay(decks, order)) {
        for (int& x : order) x++;
        return order;
    }

    return {-1};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> decks(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end());
        }

        vector<int> result = findValidOrder(n, decks);
        if (result[0] == -1 && result.size() == 1) {
            cout << -1 << endl;
        } else {
            for (int res : result)
                cout << res << " ";
            cout << endl;
        }
    }
    return 0;
}
