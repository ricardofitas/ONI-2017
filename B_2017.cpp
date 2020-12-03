#include <stdio.h>
#define Max 10000000

long int x1[Max], x2[Max], y1[Max], y2[Max], a,b,c,d,x[Max],N,Q,count[Max], C[Max][Max];


int main(){
	
	scanf("%li %li", &N,&Q);
	for(a=0;a<N;a++){
		scanf("%li %li %li %li", &x1[a], &y1[a], &x2[a], &y2[a]);
		}
	for(b=0;b<Q;b++){
		scanf("%li",&x[b]);
	}
	
	for(a=0;a<N;a++){
		for(c=x1[a];c<x2[a];c++){
			for(d=y1[a];d<y2[a];d++){
				C[c][d]=1;
			}
		}
	}
	for(b=0;b<Q;b++){
		count[b]=0;
		for(d=1;d<Q;d++){
			if(C[x[b]][d]=1){
				count[b]=count[b]+1;
			}
	}

	}
	
	for(b=0;b<Q;b++){
		printf("%li\n",count[b]);
	}
	

	return 0;
	}

