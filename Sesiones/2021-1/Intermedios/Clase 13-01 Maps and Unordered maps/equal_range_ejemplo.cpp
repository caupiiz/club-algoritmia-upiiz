#include<iostream> 
#include<map> // for map operations 
using namespace std; 
  
int main() 
{ 
    // Se declara un map 
    // de tipo char e int 
    map< char, int > mp; 
      
    // Se declaran los iteradores
    pair<map<char, int>::iterator, map<char, int>::iterator> it;       
      
    // Se insertan los valores
    mp['a']=5; 
    mp['b']=10; 
    mp['c']=15; 
    mp['h']=20; 
    mp['k']=30; 
      
    // Se usa equal_range() para buscar por 'b'  
    // key found 
    // 1er elemento de "it" tiene la direccion a lower_bound (b), es decir b
    // 2do elemento de "it" tiene la direccion a upper_bound (b), es decir, c  
    it = mp.equal_range('b'); 
      
    cout << "The lower_bound of key is : " 
        << it.first -> first << "->" << it.first -> second; 
    cout << endl; 
      
    cout << "The upper_bound of key is : " 
        << it.second -> first << "->" << it.second -> second; 
      
    cout << endl << endl ; 
      
    // Usando equal_range() para buscar por 'd'  
    // key not found 
    // Ambos elementos apuntan a la key más grande consecutiva 
    // key - 'h' 
    it = mp.equal_range('k'); 
      
    cout << "The lower_bound of key is : " 
        << it.first -> first << "->" << it.first -> second; 
    cout << endl; 
      
    cout << "The upper_bound of key is : " 
        << it.second -> first << "->" << it.second -> second; 
      
      
} 
