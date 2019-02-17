#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n;
  cin>>n; 
  while(n--){
  
	string c; 
	cin>>c; 
	
	bool bandera = true; 
	for(int i = 0; i<c.size()/2; i++){
		if(c[i] != c[c.size()-1-i]) bandera =false; 
		
		
		
	}
	if(bandera){
		cout<<"P\n"; 
	}else{
		cout<<"NP\n"; 
		
	}
  
  }
	
	return 0; 
}