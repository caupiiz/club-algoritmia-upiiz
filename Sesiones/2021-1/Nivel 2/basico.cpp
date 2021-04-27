#include <bits/stdc++.h>

using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen

//Macros
#define watch(x) cout << (#x) << " es: " << x << endl;
//this code makes input and output more efficient
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Type names
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<long long int> vlli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1

//usar double en vez de float por más precision

bool are_equal(double a, double b){
  if (abs(a-b) < 1e-9) { // a and b are equal  
    return true;
  }
  else{
  	return false;
  }
}



int main(){

    fastIO

    /*
    unsigned long long int n1=0;
    unsigned long long int n2=0;
    unsigned long long int n3=0;
    */
    ulli n1=0, n2=0, n3=0;

    double a = 1;
    double b = 0.3 * 3 + 0.1;

    printf("%.20f\n", b);
    

    if(a==b){
        //"\n" works faster than endl, because endl always causes a flush operation 
        //cout << "Si" << endl;
        cout << "Si \n";
    }
    else{
        cout << "No \n" ;
    }

    if(are_equal(a,b)){
        cout << "Si \n";
    }
    else{
        cout << "No \n";
    }
    watch(a)
    watch(b)

    


    return 0;
}
