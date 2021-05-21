#include<iostream>
using namespace std; 

long long compute_hash(string s) {
    const int m = 1e9 + 9;
    int p = 31;
    long long hash = 0;
    long long pow = 1;
    for (int i=0; i<s.size(); i++) {
        hash = (hash + (s[i] - 'a' + 1) * pow) % m;
        pow = (pow * p) % m;
    }
    return hash;
}

int main() {
    string s;
    cin>>s;
	cout << "El hash de "<<s<<" es: " << compute_hash(s);
	return 0;
}