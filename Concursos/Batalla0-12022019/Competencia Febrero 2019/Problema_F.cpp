#include<stdlib.h>
#include<iostream>

using namespace std; 

int main(){
	int F,C; 
	
	scanf("%d %d",&F,&C);  
	int M[F][C]; 
	for(int i = 0; i<F; i++)
		for(int j = 0; j<C; j++)
			scanf("%d",&M[i][j]); 
		
	for(int i = F-1; i>=0; i--){
		for(int j = 0; j<C; j++) printf("%d ",M[i][j]); 
		printf("\n");  
	}
	
	return 0; 
}