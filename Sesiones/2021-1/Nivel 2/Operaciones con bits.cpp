#include <bits/stdc++.h>

using namespace std;

int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
  
    // El resultado es 00000001
    cout << "a = " << /*int*/(a) << " b = " << (int)b << endl; 
    cout << "a&b = " << (a & b) << endl;
  
    // El resultado es 00001101
    cout << "a|b = " << (a | b) << endl;
  
    // El resultado es 00001100
    cout << "a^b = " << (a ^ b) << endl;
  
    // El resultado es 11111010
    //printf("~a = %d\n", a = ~a);
    a = ~a;
    cout << "~a = "<< int(a) << endl;

    //recordemos que b es 9(00001001)
  
    // El resultado es 00010010, es decir, 18
    printf("b<<1 = %d\n", b << 1);
    cout << "b<<1 = " << (b<<1) << endl;
  
    // El resultado es 00000100, es decir, 4
    printf("b>>1 = %d\n", b >> 1);
    cout << "b>>1 = " << (b>>1) << endl;

    // El resultado es 00000010, es decir, 2 
    printf("b>>2 = %d\n", b >> 2);

    //como saber si es par?
    cout << (894 & 1) << endl;
    cout << ( b & 1 ) << endl;


    return 0;
}
