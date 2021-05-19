// Dec a Bin
#include <iostream>
#include <algorithm>
using namespace std;

string s;
u_long n, mask=1;

int main()
{
  cin>>n;
  
  for(int i=0; i<64; i++){
    
    // O hasta mask<(1ul<<(sizeof(long)*8-1)), mas general
    
    if(mask & n){
        s+='1';
    }
    else {
        s+='0';
    }
    mask=mask<<1;
    
  }
  
  reverse(s.begin(), s.end());
  
  bool ini=0;
  for(int i=0; i<s.size();i++){
      if(s[i]=='1') ini=true;
      if(ini) cout<<s[i];
  }
  
 return 0;
}