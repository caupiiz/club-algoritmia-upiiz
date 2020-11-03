#include <bits/stdc++.h>

using namespace std;

long long int compute_hash(string s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long int hash_value = 0;
    long long int p_pow = 1;

    for(char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m; 
    }

    return hash_value;
}

vector< vector<int> > group_ident_strings(vector<string> s) {
    int n = s.size();
    vector<vector<int>> groups;

    vector<pair<long long int, int>> hashes(n);
    // Calcular los hashes
    for (int i = 0; i < n; i++) {
        hashes[i] = {compute_hash(s[i]), i};
    }
    // Ordenamos los hashes
    sort(hashes.begin(), hashes.end());
    // Generar grupos
    for (int i = 0; i < n; i++) {
        if(i == 0 || hashes[i].first != hashes[i-1].first)
            groups.emplace_back();
        groups.back().push_back(hashes[i].second);
    }

    return groups;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    // O(n*mlog(n))
    // O(nlog(n) + m)
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<vector<int>> groups;
    groups = group_ident_strings(s);

    // Imprimir los grupos
    int numGrupos = groups.size();
    for (int i = 0; i < numGrupos; i++) {
        cout << "Group " << (i + 1) << endl;
        vector<int> group = groups[i];
        int numElements = group.size();
        for (int j = 0; j < numElements; j++) {
            cout << group[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
