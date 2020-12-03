#include <stdio.h>
#define Max 100000

long int x1[Max], x2[Max], i1[Max], y2[Max], a,b,c,d,x[Max],N,Q,count[Max];

int main(){
	
	scanf("%li %li", &N,&Q);
	for(a=0;a<N;a++){
		scanf("%li %li %li %li", &x1[a], &i1[a], &x2[a], &y2[a]);
		}
	for(b=0;b<Q;b++){
		scanf("%li",&x[b]);
	}
	
	for(b=0;b<Q;b++){
		count[b]=0;
		for(a=0;a<N;a++){
			if(x[b]<x2[a] && x[b]>=x1[a]){
				count[b]=count[b]+(y2[a]-i1[a]);
			}
		}
	}

	for(b=0;b<Q;b++){
		printf("%li\n",count[b]);
	}
	
	return 0;
	}

