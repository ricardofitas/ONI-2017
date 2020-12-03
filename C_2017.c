#include <stdio.h>
#define Max 10000000

long int N,a,b,Maior,i,j,k,l,Atual, NN[Max],L[Max];

int main(){
	scanf("%li",&N);
	for(i=0;i<N;i++){
		scanf("%li",&NN[i]);
	}

	Maior = 0;
	for(i=0;i<N;i++){
		a=1;
		for(j=0;j<N;j++){
			if (i!=j){
				if(NN[i]>=NN[j]){
					if(NN[i]%NN[j]==0){
						L[a-1]=NN[j];
						a=a+1;
					}
				}
				else{
					if(NN[i]<NN[j]){
						if(NN[j]%NN[i]==0){
							L[a-1]=NN[j];
							a=a+1;
						}
					}
				}
			}			
		}
		
		if(a-1==0)
			Atual=1;
		else{
			Atual=a-1; 
		    b = Atual;
		
			for(k=0;k<Atual-1;k++){
				for(l=0;l<Atual-1;l++){
					if (k!=l){
						if(L[l]>L[k]){
							if(L[l]%L[k]!=0){
								b=b-1;
							}
						}
						if(L[l]<L[k]){
							if(L[k]%L[l]!=0){
								b=b-1;
							}
						}
					}
				}
			}
			Atual = b+1;
		}
		if(Atual>Maior)
			Maior=Atual;
	}
	
	printf("%li\n",Maior);
	return 0;
	
}
