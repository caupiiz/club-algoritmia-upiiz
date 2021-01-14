
#include <bits/stdc++.h> 
using namespace std; 
  
#define watch(x) cout << (#x) << " es: " << x << endl;

int countWords(string str) 
{ 
    // Se fragmenta la string de entrada usando stringstream
    stringstream s(str); // Para fragmentar las palabras
    string word; // Se almacenan las palabras individuales
  
    int count = 0; 

    map<string,int> m;

    while (s >> word) {
        watch(word)

        m[word]++;

        watch(m[word])

        count++;         
    }
        
    return count; 
} 

int main() 
{ 
    string s = "Hola cosita como estas? yo " //el espacio cuenta
               "te quiero amar <3"; 
    cout << " Numero de palabras: " << countWords(s); 
    return 0; 
} 
