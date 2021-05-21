// Esto convierte un numero binario a decimal
#include <iostream>
using namespace std;

string s;
unsigned int mask = 1, res;

int main()
{
  cin>>s;
  int t = s.size();
  for(int i=0; i<t; i++){
        if(s[t-i-1]=='1') res|=mask<<i;
  }
  
  cout<<res;
  
}