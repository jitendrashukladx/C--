#include <bits/stdc++.h>

using namespace std;

int hammingDist(string str1, string str2) 
{ 
    int i = 0, count = 0; 
    while (str1[i] != '\0') { 
        if (str1[i] != str2[i]) 
            count++; 
        i++; 
    }
    cout << count << endl;;
    return count; 
} 
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int K;
    cin >> K;
    string str1, str2;
    cin >> str1 >> str2;

    if(hammingDist(str1, str2) <= 1)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}