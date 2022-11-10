#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    char comando;
    string nombre;

    stack<string> mujeres;

    while(n--){
        cin>>comando>>nombre;

        if(comando == 'F'){
            mujeres.push(nombre);
        }else{
            cout<<nombre<<" "<<mujeres.top()<<endl;
            mujeres.pop();
        }
    }
    return 0;
}
