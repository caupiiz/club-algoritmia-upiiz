#include <bits/stdc++.h>
using namespace std;
// https://omegaup.com/arena/problem/Monticulos-de-monedas#problems
uint64_t power(uint64_t base, uint64_t exp,uint64_t mod){
    if(exp == 0) return 1;
    uint64_t p=power(base, exp/2,mod);
    p=(p*p)% mod;

    return (exp%2 == 0)?p:(base * p)%mod;
}

int main(){
	uint64_t n;
	cin>>n;
	cout<<(power(2,n,1234567890)%1234567890-1-n%1234567890)%1234567890<<endl;
    
	return 0;
}
