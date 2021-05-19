#include <iostream>
#include <bitset>
using namespace std;

bitset<4> misbits;
bitset<4> copia;
int main()
{
    // Entrada
    cin>>misbits;
    copia=misbits;
    
    // Accesar bits
    copia[2] = 1;
    cout<<"Encendiendo la posicion [2]: "<<copia<<endl;
    
    // Negar bits
    copia=misbits;
    copia.flip();
    cout<<"La negacion es: "<<copia<<endl;
    
    // Contar bits
    cout<<"Bits encendidos originalmente: "<<misbits.count()<<endl;
    
    // Checar si alguno es 1
    cout<<"Habia algun bit encendido originalmente? "<<(misbits.any()?"Si":"No")<<endl;
    
    // Checar si todos son 0
    cout<<"Estaban todos apagados originalmente? "<<(misbits.none()?"Si":"No")<<endl;
    
    // Convertir a u_long
    cout<<misbits<<" en decimal es igual a "<<misbits.to_ullong()<<endl;
    
    // Prender todos o modificar uno
    copia.set();
    cout<<copia<<endl;
    copia.set(3,0);
    cout<<copia<<endl;
    
    // Apagar uno o todos
    copia.reset();
    cout<<copia<<endl;
    
    copia.flip();
    cout<<copia.any()<<endl;
    
    // Quiza las mascaras de bits ya no sean tan utiles
    // Pero siempre pueden seguir usando & y |
    
return 0;
}
