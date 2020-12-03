#include <stdio.h>
#define Max 100000

long int I,N,B,b,c,a,M[Max];
char S[Max],U,ch;

int main(){
	scanf("%li %li %li",&N,&B,&I);
	getchar();
	a = 0;
	while (ch !='\n'&& a<N){
		ch=getchar();
		S[a]=ch;
		a++;
	}
	S[a] = '\0';

	c=0;
	if(S[B-1]=='T'){
		c=c+1;
		M[B-1]=1;
	}
	
	a=0;
	for(a=0;a<I;a++){
		scanf(" %c %li",&U,&b);
	
		if(U=='D'){
			B=B+b;
		}
		if(U=='E'){
			B=B-b;
		}	
		if(S[B-1]=='T' && M[B-1]!=1){
				c=c+1;
				M[B-1]=1;
		}
	}
	printf("%li\n",c);
	return 0;
}

