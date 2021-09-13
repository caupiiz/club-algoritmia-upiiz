#include <bits/stdc++.h> 

using namespace std; 

#define watch(x) cout << (#x) << " es: " << x << endl;

//usar double en vez de float por más precision

int main(){

/*
    int num1 = 6;

    if ( num1 % 2 == 0) {
        cout << "Num 1 es multiplo de 2" << endl;
    }
    
    if (num1 % 3 == 0){ //Se ejecuta si la sentencia anterior es falsa y la condicion es verdadera
        cout << "Num 1 es multiplo de 3" << endl;
    }

    if (num1 % 4 == 0){
        cout << "Num 1 es multiplo de 4" << endl;
    }
    else{
        cout << "Num 1 no es multiplo de 4" << endl;
    }

    */
   /*
    
    int day = 8;

    cout << "Con if/else: " << endl;

    if(day == 1){
        cout << "Monday"<< endl;
    }
    else if(day == 2){
        cout << "Tuesday"<< endl;
    }
    else{
        cout << "?" << endl;
    }

    cout << "Con switch: " << endl;

    
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "?";

    }

    */

    //CICLOS

    

    //WHILE
    /*
    int i = 1;
  
    while (true)
    {
        cout << "Hola Mundo" << endl;  
        watch(i)
        i++;
    }

    cout << " Con Do While: " << endl;
    //DO 
    */

    /*
    i = 2; 
  
    do
    {
        cout << "Hola Mundo" << endl;
        watch(i)
        i++;
  
    }  while (i < 4); 
    */


    
    //FOR

    int suma=0;

    int n=0;

    cin >> n;
      
    for (int i = 1; i <= n; i+=1)
    {
        suma = suma + i;
        watch(suma)
        watch(i)
        //suma += i;
    }

    cout << suma << endl;

    cout << (n * (n+1) ) / 2;

    

    return 0;
}
