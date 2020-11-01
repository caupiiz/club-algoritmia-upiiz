// Funcion no vacia de ejemplo
// Elevar un numero entero positivo a otro
#include <iostream>
using namespace std;

typedef unsigned long long ull; // Luego de esto, cada ocurrencia de ull se tomara como unsigned long long

ull exponenciar(ull a, ull b); // Prototipo de funcion
ull w,x,y,z; // Las variables inicializadas aqui tienen valor de 0

int main()
{
    cin>>w>>x>>y>>z;
    cout<<exponenciar((exponenciar(w,x)+exponenciar(x,w))/(exponenciar(y,z)-exponenciar(z,y)),w+x-y-z);
    
return 0;
}

ull exponenciar(ull a, ull b){ // Aqui inicia la funcion
    ull c=1;
    while(b--){ // El ciclo se ejecuta hasta que b==0. El operador -- reduce el valor de b después de cada vuelta
        c*=a; // Multiplicar 'a' 'b' veces 
    }
    return c; // Devolver el valor de c
}
