/*
    -La suma de los primeros n numeros
    -Esta solucion necesita un for
    -Existen varias formas de lograr el mismo resultado
    una de ellas y mas eficientes es sabiendo que la sumatoria desde
    k = 0 hasta n es igual a 1/2(n(n+1))
*/



//Cargamos las bibliotecas
#include <bits/stdc++.h>
using namespace std;
int main(){
    //Declaramos variables 
    int n;
    int suma=0;//iniciamos en cero porque vamos a sumar
    cin>>n;//Pedimos el valor de n

    //Iteramos desde 1 hasta n
    //1,2,3,4,5,6,7,8,9......n
    for(int i=1;i<=n;i++){
        suma+=i;//Acomulamos lo que tiene en mas el valor de i
        //0+1+2+3+4+5+6+7+8+.....+n
    }
    //Imprimimos el valor de suma
    cout<<suma<<endl;
}
