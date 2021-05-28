// Buscar patron en texto con Rabin Karp
#include <bits/stdc++.h>
using namespace std;

#define b 31
const int m = 1e9 + 9;

void buscar(string patron, string texto);

int main()
{
    string texto = "este es un texto textoso con mucho texto";
    string patron ="texto";
    
    
    buscar(patron,texto);
    
    return 0;
}

void buscar(string patron, string texto){
    
    int lPat = patron.size();
    int lText = texto.size();
    int hashPat = 0;
    int hashSub = 0;
    int potencia = 1;
    
    for(int i=0; i<lPat-1; i++){
        potencia = (potencia * b) % m;
    }
    
    for(int i=0; i<lPat; i++){
        hashPat = (hashPat * b + patron[i]) % m ;
        hashSub = (hashSub * b + texto[i]) % m ;
    }
    
    for(int i=0; i<=lText - lPat; i++){
        if (hashPat == hashSub){
            for(int j=0; j<lPat; j++){
                if(texto[i+j] != patron[j]) break;
                
                if(j+1 == lPat){
                    cout<<"El patron se encontro en la posicion "<<i<<endl;
                }
                
            }
        }
        
        if(i < lText - lPat){
            hashSub = ((hashSub - texto[i]*potencia)*b + texto[i+lPat]) % m;
        }
        
        if(hashSub<0){ 
            hashSub = hashSub + m;
        }
        
    }
    
}
