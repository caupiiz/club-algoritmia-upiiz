#include <bits/stdc++.h>

using namespace std;

void prefixFunction(string s, vector<int> &pi);

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> pi(n, 0);
    prefixFunction(s, pi);
    cout << "[";
    for (int i = 0; i < n-1; i++) {
        cout << pi[i] << " ";
    }
    cout << pi[n-1] << "]" << endl;;
    return 0;
}

void prefixFunction(string s, vector<int> &pi) {
    int n = s.size();
    for (int i = 1; i < n; i++) {
        for (int k = 0; k <= i; k++) {
            if(s.substr(0, k) == s.substr(i-k+1, k))
                pi[i] = k;
        }
    }
}
