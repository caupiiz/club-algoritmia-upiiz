
#include <bits/stdc++.h> 
using namespace std; 

#define watch(x) cout << (#x) << " es: " << x << endl;
  
// Prints frequencies of individual words in str 
void printFrequencies(const string &str) 
{ 
    // Se declara el map de tipo <string, int>, cada palabra 
    // se mapea a su frecuencia
    unordered_map<string, int> wordFreq; 
  
    // Se fragmenta la string de entrada usando stringstream
    stringstream s(str); // Para fragmentar las palabras
    string word; // Se almacenan las palabras individuales
  
    while (s >> word) {
        wordFreq[word]++;        
    }
  
    // Luego se itera wordFreq y se imprime

    unordered_map<string, int>:: iterator p; 

    for (p = wordFreq.begin(); p != wordFreq.end(); p++) 
        cout << "(" << p->first << ", " << p->second << ")\n"; 
} 
  
// Driver code 
int main() 
{ 
    string str = "Con esta mano yo sostendre tus anhelos; tu copa nunca estara "
                 "vacia, pues yo sere tu vino; con esta vela alumbrare tu camino en "
                 "la oscuridad. Con este anillo yo te pido que seas mi esposa";
    string str2 = "pon esa cosa horrorosa ahi "
                 "bom bom bom bom bom bom es un musicaaaaaal"; 

    cout << "FRASE UNO: \n";
    printFrequencies(str); 

    cout << "\n FRASE DOS: \n";
    printFrequencies(str2); 
    return 0; 
} 
