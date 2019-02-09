#include <bits/stdc++.h>
using namespace std; 

uint64_t C(uint64_t n, uint64_t k){
	
	/*Aquí hace la resta, que permite 
	un número de n y k más grande por 
	simetría */
	if(k>n/2) k = n-k; 
	uint64_t res = 1; 
	
	for(int i = 0; i<k; i++ ) res=res*(n-i)/(1+i);
	
	return res; 
}

int main(){
	/*Esta línea sólo es para que la consola en windows
	no se vea tan pequeña e imprima todas las salidas*/
	/**/system("mode con: cols=200 lines=200");/**/
	//--------------------------------------------

	int n; 
	cin>>n; 
	for(int i = 0; i<=n;i++){
		for(int j = 0; j<=i; j++){
			cout<<C(i,j)<<" "; 
		}
		cout<<"\n"; 
	}	
	
	return 0; 
}
