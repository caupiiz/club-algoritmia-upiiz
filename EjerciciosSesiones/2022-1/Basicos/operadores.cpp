#include <bits/stdc++.h> 

using namespace std; 

#define watch(x) cout << (#x) << " es: " << x << endl;

//usar double en vez de float por más precision

int main(){

    //OPERADORES ARITMÉTICOS
    //cout << "\n Operadores aritmeticos " << endl;
    int num1=6, num2=5;

    /*
    cout << "Suma de num1 + num2 = " << num1 + num2 << endl;
    cout << "Resta de num1 + num2 = " << num1 - num2 << endl;
    cout << "Multiplicacion de num1 + num2 = " << num1 * num2 << endl;
    cout << "Division de num1 + num2 = " << num1 / num2 << endl;
    cout << "Num1 Modulo Num2 = " << num1 % num2 << endl;
    num1++;
    num2--;
    cout << "Num1 incremento por 1 = " << num1 << endl;
    cout << "Num2 decremento por 1 = " << num2 << endl;

    */

   /*
    //OPERADORES LÓGICOS
    cout << "\n Operadores lógicos " << endl;
    num1=20;
    num2=num1;
    
    //Es num1 multiplo de 6? Debe ser multiplo de 2 y de 3
    cout << ( (num1 % 2 == 0) && (num1 % 3 == 0) ) << endl;
    
    //Es num2 multiplo de 3 o de 4?
    cout << ( (num2 % 3 == 0) or (num2 % 4 == 0) )<< endl;
*/


    /*
    cout << "\n Operadores de asignacion " << endl;
    num1=3;
    cout << "num1 es" << num1 << endl;
    watch(num1)
    num1+=3; //Es lo mismo que num1 = num1 + 3
    watch(num1)
    num1-=3; //Es lo mismo que num1 = num1 - 3
    watch(num1)
    num1*=3; //Es lo mismo que num1 = num1 * 3
    watch(num1)
    num1/=3; //Es lo mismo que num1 = num1 / 3
    watch(num1)
    num1%=3; //Es lo mismo que num1 = num1 % 3
    watch(num1)
    */

    char caracter1 = 'a';
    char caracter2 = 'a'; 

    
    cout << "\n Operadores de comparacion " << endl;
    num1=3;
    cout << "Es num1 igual a 5? = " << (num1 == 5) << endl;
    cout << "Es num1 diferente de 5? = " << (num1 != 5) << endl;
    cout << "Es num1 mayor a 5? = " << (num1 > 5) << endl;
    cout << "Es num1 menor a 5? = " << (num1 < 5) << endl;
    cout << "Es num1 mayor o igual a 5? = " << (num1 >= 5) << endl;
    cout << "Es num1 menor o igual a 5? = " << (num1 <= 5) << endl;

    cout << endl << "Es caracter 1 igual a caracter 2?" << (caracter1==caracter2) << endl;
    
    

    return 0;
}
