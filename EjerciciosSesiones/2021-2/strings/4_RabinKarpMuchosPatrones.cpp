// Buscar multiples patrones en texto con Rabin Karp
#include <bits/stdc++.h>
using namespace std;

#define b 31
const int m = 1e9 + 9;

void buscar(string patron1, string patron2, string texto);

int main()
{
    string texto = "casi me dice que si se metio a mecatronica";
    string patron1 = "si";
    string patron2 = "me";
    
    buscar(patron1,patron2,texto);
    
    return 0;
}

void buscar(string patron1, string patron2, string texto){
    
    int lPat = patron1.size();
    int lText = texto.size();
    int hashPat1 = 0;
    int hashPat2 = 0;
    int hashSub = 0;
    int potencia = 1;
    
    for(int i=0; i<lPat-1; i++){
        potencia = (potencia * b) % m;
    }
    
    for(int i=0; i<lPat; i++){
        hashPat1 = (hashPat1 * b + patron1[i]) % m ;
        hashPat2 = (hashPat2 * b + patron2[i]) % m ;
        hashSub = (hashSub * b + texto[i]) % m ;
    }
    
    for(int i=0; i<=lText - lPat; i++){
        if (hashPat1 == hashSub){
            for(int j=0; j<lPat; j++){
                if(texto[i+j] != patron1[j]) break;
                
                if(j+1 == lPat){
                    cout<<"El patron "<<patron1<<" se encontro en la posicion "<<i<<endl;
                }
                
            }
        }
        
        if (hashPat2 == hashSub){
            for(int j=0; j<lPat; j++){
                if(texto[i+j] != patron2[j]) break;
                
                if(j+1 == lPat){
                    cout<<"El patron "<<patron2<<" se encontro en la posicion "<<i<<endl;
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