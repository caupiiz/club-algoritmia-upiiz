/*
Problema de clase 1:
Encontrar el el numero mas grande de n numeros
*/

//Biblioteca que carga todas las funciones de c++
#include <bits/stdc++.h>
using namespace std;//para ya no usar el std:: en los cout y cin
//Funcion principal
int main(){
    int n,num;
    int mayor=0;//El limite, el numero mayor de inicio debe de ser el mas pequeño
    //Nota si se va a trabajar con numeros mas pequeños la variable mayor debe de ser mas pequeño
    cin>>n;//se pide el valor de n
    while(n--){//Hace n veces
        cin>>num;//Se pide un numero
        if(num>mayor){//se pregunta num es mayor a "mayor"
            //si es asi
            mayor=num;//se hace el intercambio
        }
    }
    cout<<mayor<<endl;//imprimir el valor de mayor
}
