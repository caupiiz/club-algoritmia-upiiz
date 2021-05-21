#include<iostream>
#include<map>
using namespace std;

map<long long,string> tabla;

string cadena;
int n, nCadDif;

long long compute_hash(string s);

int main() {
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>cadena;
        long long newHash = compute_hash(cadena);
        if(tabla.count(newHash)==0){
            tabla[newHash]=cadena;
            nCadDif++;
        }
    }
    cout<<nCadDif<<endl;
	return 0;
}

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