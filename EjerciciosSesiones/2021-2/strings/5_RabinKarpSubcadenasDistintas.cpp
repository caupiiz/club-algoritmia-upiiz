// Cantidad de subcadenas distintas con Rabin Karp
#include <bits/stdc++.h>
using namespace std;

#define b 31
const int m = 1e9 + 9;
map<long long,string> hashes;

void buscar(int n, string texto);

int main()
{   
    int n = 2;
    string texto = "aabab";
    
    buscar(n,texto);
    
    return 0;
}

void buscar(int n, string texto){
    
    int lText = texto.size();
    int hashSub = 0;
    int potencia = 1;
    int nSubCadDif = 0;
    
    for(int i=0; i<n-1; i++){
        potencia = (potencia * b) % m;
    }
    
    for(int i=0; i<n; i++){
        hashSub = (hashSub * b + texto[i]) % m ;
    }
    
    for(int i=0; i<=lText - n; i++){
        
        if(hashes.count(hashSub)==0){
            hashes[hashSub]=texto.substr(i,n);
            nSubCadDif++;
        } else {
            if(texto.substr(i,n) != hashes[hashSub]){
                hashes[hashSub]=texto.substr(i,n);
                nSubCadDif++;
            }
        }
        
        if(i < lText - n){
            hashSub = ((hashSub - texto[i]*potencia)*b + texto[i+n]) % m;
        }
        
        if(hashSub<0){ 
            hashSub = hashSub + m;
        }
        
    }
    
    cout<<nSubCadDif++;
    
}