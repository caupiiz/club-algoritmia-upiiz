 #include <iostream>
using namespace std;
// https://omegaup.com/arena/problem/Cajas-de-dulces#problems
int main(){
	int n,k;

	cin>>n>>k;

	int M[n];
	for(int i = 0; i<n; i++)
		cin>>M[i];


	int max = 0;
	for(int i = 0; i<=n-k; i++){
		int j = 0;

		int suma = 0;
		for(int j = 0; j<k ; j++){
			suma+=M[j+i];
		}
		if(suma>max) max = suma;

	}
	cout<<max<<endl;

	return 0;
}
