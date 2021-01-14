#include <bits/stdc++.h>

using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen

#define watch(x) cout << (#x) << " es: " << x << endl;
#define EPS 1.19209e-07 //para comparar perdidas en variables decimales
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007

typedef int entero;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<long long int> vlli;
typedef vector<unsigned long long int> vulli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1

//usar double en vez de float por más precision

int main(){

    fastIO

    //Declarar el mapa usando la librería estándar de c++:

    map<string,int> m;
    unordered_map<string,int> um;

    m.insert({ "Alejandrou" , 10 });
    m.insert({ "Alejandro" , 10 });
    m.insert({ "Guadalupe" , 10 });
    m.insert({ "Roberto" , 5 });
    m.insert({ "Andres" , -10 });

    
    um.insert({ "Alejandrou" , 10 });
    um.insert({ "Alejandro" , 10 });
    um.insert({ "Guadalupe" , 10 });

    um.insert({ "Seis" , 6 });
    um.insert({ "Ocho" , 8 });
    um.insert({ "Siete" , 7 });   
    
    um.insert({ "Roberto" , 5 });
    um.insert({ "Andres" , -10 });

    um.at("Alejandrou") = 12; 
    //La diferencia entre at() y [] es que at() arroja una excepción out-of-range que se debe manejar, mientras que []

    /*
    int bkt1 = um.bucket("Alejandrou");
    int bkt2 = um.bucket("Roberto");
    int bkt3 = um.bucket("Guadalupe"); 

    watch(bkt1)
    watch(bkt2)
    watch(bkt3)
    */


    cout << "\n MAP STRINGS \n" ;

    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }


    cout << "\n UNORDERED MAP STRINGS \n" ;

    //Parece que es por orden de los valores
    for (auto x : um) {
        cout << x.first << " " << x.second << "\n";
    }

    map<int,int> m2;
    unordered_map<int,int> um2;

    m2.insert({ 5 , 10 });
    m2.insert({ 4 , 20 });
    m2.insert({ 1 , 50 });
    m2.insert({ 3 , 30 });
    m2.insert({ 2 , 40 });

    um2.insert({ 5 , 5 });
    um2.insert({ 4 , 4 });
    um2.insert({ 1 , 1 });
    um2.insert({ 3 , 3 });
    um2.insert({ 2 , 2 });

    cout << "\n MAP INTEGERS \n" ;

    for (auto x : m2) {
        cout << x.first << " " << x.second << "\n";
    }


    cout << "\n UNORDERED MAP INTEGERS \n" ;

   
    for (auto x : um2) {
        cout << x.first << " " << x.second << "\n";
    }


    return 0;
}
