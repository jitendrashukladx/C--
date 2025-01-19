#include <bits/stdc++.h>

using namespace std;

vector<int> max_fibonacciness(int t, const vector<tuple<int, int, int, int>>& test_cases) {
    vector<int> results;
    for (const auto& case_tuple : test_cases) {
        int a1, a2, a4, a5;
        tie(a1, a2, a4, a5) = case_tuple;

        vector<int> possible_a3 = {a4 - a2, a5 - a4};
        int max_fibo = 0;

        for (int a3 : possible_a3) {
            int fib_count = 0;
            if (a1 + a2 == a3) fib_count++;
            if (a2 + a3 == a4) fib_count++;
            if (a3 + a4 == a5) fib_count++;
            max_fibo = max(max_fibo, fib_count);
        }
        results.push_back(max_fibo);
    }
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<tuple<int, int, int, int>> test_cases(t);

    for (int i = 0; i < t; ++i) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        test_cases[i] = make_tuple(a1, a2, a4, a5);
    }

    vector<int> results = max_fibonacciness(t, test_cases);
    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}
