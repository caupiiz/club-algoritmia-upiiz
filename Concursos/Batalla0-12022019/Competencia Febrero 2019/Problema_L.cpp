#include <bits/stdc++.h>
using namespace std; 
uint64_t BinarioADecimal(string lol){
	cout<<lol.size()<<endl; 
	uint64_t n=0; 
	for(int i = lol.size()-1; i>=0 ; i--){
		if(lol[i] == '1') n = n+(uint64_t)pow(2,lol.size()-1-i); 
		cout<<n<<endl; 
	}
	return n; 
}

int main(){
string c; 
cin>>c; 
cout<<(uint64_t)BinarioADecimal(c)<<endl; 
return 0; 
}
