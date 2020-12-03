#include <stdio.h>
#define Max 10000000

long int N,a,b,Maior,M[Max],i,j,N[Max],L[Max];

int main(){
	scanf("%li",&N);
	for(i=0;i<N;i++){
		scanf("%li",&N[i]);
	}
	Maior=0;
	for(i=0;i<N;i++){
		a=0;
		for(j=0;j<N;j++){
			if(N[i]>N[j]){
				if(N[i]%N[j]==0){
					L[a]=N[j];
					a=a+1;
				}
			}
			if(N[i]<N[j]){
				if(N[j]%N[i]==0){
					L[a]=N[j];
					a=a+1;
				}
			}
			if(N[i]=N[j] && i!=j){
					L[a]=N[j];
					a=a+1;
			}
		}
		b=a;
		for(a=0;a<=b;a++){
			if(N[i]>L[a]){
				if(N[i]%L[a]!=0){
					b=b-1;
				}
			}
			if(N[i]<L[a]){
				if(L[a]%N[i]!=0){
					b=b-1;
				}
			}
		}
		M[i]=b+1;
		if(i>0){
			if(M[i]>M[i-1]){
				Maior=M[i];
			}
		}
	}
	
	printf("li\n",Maior);
	return 0;
	
}
