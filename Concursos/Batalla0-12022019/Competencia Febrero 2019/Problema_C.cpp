 #include <iostream>
using namespace std; 

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
			//cout<<M[i+j]<<" "; 
			suma+=M[j+i]; 
			
		}
	    //cout<<"\n"; 
		if(suma>max) max = suma; 
		
	}
	cout<<max<<endl; 
	
	
	return 0; 
}
