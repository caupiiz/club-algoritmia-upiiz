#include <bits/stdc++.h>
#define N 10000000
// https://omegaup.com/arena/problem/Juanito-y-los-primos#problems
using namespace std;

bool mark [N];
vector <int> primeList;

void cribaH(){

	memset (mark, true, sizeof(mark));

    mark [0] = mark [1] = false;

    for ( int i = 4; i < N; i += 2 )
        mark [i] = false;

    for ( int i = 3; i * i <= N; i += 2 ) {
        if ( mark [i] ) {
            for ( int j = i * i; j < N; j += 2 * i )
                mark [j] = false;
        }
    }

    primeList.clear ();
    primeList.push_back (2);

    for ( int i = 3; i < N; i += 2 ) {
        if ( mark [i] )
            primeList.push_back (i);
    }

 	//cout<<primeList[0]<<endl;
	//system("pause>nul");

    //printf ("%d\n", primeList.size ());
}


bool esPrimo(int64_t p){
	bool bandera = true;

	int64_t i = 0;

	if(p<N) return mark[p];

	while(primeList[i]<=sqrt(p) && i<primeList.size()){ if(p%primeList[i] == 0){return false; }    i++;}


	return bandera;
}

int main(){
	cribaH();

	uint64_t n;
	cin>>n;
	if(esPrimo(n)){
		cout<<"si es primo\n";
	}
	else{
		cout<<"no es primo\n";
	}
	return 0;
}
