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

    //Insertar valores: 
    m["Chocolate"] = 10;
    m["Vainilla"] = 9;
    m["Fresa"] = 8;
    m["Grosella"] = 10;

    m["Pistache de la michoacana"] = 10;
    m["Cereza de Thrifty"] = 10;

    //m["Chocolate"] = 20; //se inserta (se está redeclarando)
    //m.insert({ "Chocolate", 20 }); //no se inserta (ya existe un elemento con esa llave)

    string s1 = "hola";

    m.insert({ s1, 30 }); //un par de elementos

    m.insert(pair<string, int>("adios", 40)); 

    cout << m["Chocolate"] << "\n"; // 10
    cout << m["hola"]      << "\n"; // 30
    cout << m["adios"]     << "\n"; // 40

    //Si se solicita una llave que no exista:

    cout << m["Napolitano"] << "\n"; // 0

    //Verificar si una llave existe en el mapa:

    if(m.count("Napolitano")){
        //la llave existe
        cout << "Existe" << "\n";
    }
    else{
        cout << "No existe" << "\n";
    }

    //Imprimir todos los elementos de un mapa:

    cout << "\n" << "Elementos del mapa:" << "\n" << "\n";

    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }

    cout << "\n KEY \t ELEMENT \n";
    for (auto itr = m.begin(); itr != m.end(); ++itr) {

        // itr es un puntero que apunta a pair<string, int> 
        // itr->first almacena la key y 
        // itr->second almacena el valor 

        cout << itr->first << " " << itr->second << '\n';
    }



    return 0;
}
