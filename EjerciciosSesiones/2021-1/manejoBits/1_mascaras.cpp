#include <iostream>
#include<algorithm>
using namespace std;

u_int mask=1, a, n, res, lon;
bool ans;

int main(){
    
    cin>>n;
    
    while(n--){
        string s;
        
        mask=1;
        a=0;
        
        cin>>s;
        lon=s.size(); 
        
        for(int i=0; i<lon; i++){
            
            
            if(s[lon-1-i]=='1'){
                a |= mask;   
            }
            
            //mask = mask<<1;
            mask<<=1;
            
        }
        
        res |= a;
        
    }
    
    mask = 1<<(32*lon);
    bool ini;
    for(int i=0; i<n; i++){
        
        if(res & mask) ini=true;
        if(ini){
            if(!(res & mask)) ans=true;
        }
        
    }
    
    cout<<ans;
    
    
return 0;
}