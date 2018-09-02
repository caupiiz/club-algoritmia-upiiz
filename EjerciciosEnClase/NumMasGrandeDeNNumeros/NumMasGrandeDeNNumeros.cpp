/*
Problema de clase 1:
Encontrar el el numero mas grande de n numeros
Nota: no es la unica forma para solucionar el problema , se puede resolver de distintas formas esta es una de ellas
*/

//Biblioteca que carga todas las funciones de c++
#include <bits/stdc++.h>
using namespace std;//para ya no usar el std:: en los cout y cin
//Funcion principal
int main(){
    int n,num;//Se de declara las variables
    int mayor=0;//El limite, el numero mayor de inicio debe de ser el mas pequeño
    //Nota si se va a trabajar con numeros mas pequeños la variable mayor debe de ser mas pequeño
    cin>>n;//se pide el valor de n
    for(int i=0;i<n;i++){//Hace n veces, tambien puede ser while(n--) es algo analogo
        cin>>num;//Se pide un numero
        if(num>mayor){//se pregunta num es mayor a "mayor"
            //si es asi
            mayor=num;//se hace el intercambio
        }
    }
    cout<<mayor<<endl;//imprimir el valor de mayor
}
