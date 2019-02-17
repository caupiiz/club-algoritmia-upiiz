#include <bits/stdc++.h>
using namespace std; 



uint64_t C(uint64_t n, uint64_t k){
	
	/*Aquí hace la resta, que permite 
	un número de n y k más grande */
	if(k>n/2) k = n-k; 
	uint64_t res = 1; 
	
	for(int i = 0; i<k; i++ ) res=res*(n-i)/(1+i);
	
	return res; 
}

int main(){
uint64_t n,m; 
cin>>n>>m; 
cout<<C(n,m)<<endl; 

return 0; 
}