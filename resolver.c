/*
  Modifica este ficheiro para fazerem a vossa solucao do Problema D.

  Nao modifiques mais nenhum ficheiro.
*/

#include "avaliador.h"

void resolver(int N, char C)
{
  char tentativa[MAXN];
  int i,k,a=0,K,c=0;
  int resultado[MAXN];
  int result;
  char t[MAXN],t2[MAXN];
  
  for (i = 0; i < N; i++){
	tentativa[i] = '0';
  }
  resultado[0] = adivinhar(tentativa); 
  if(resultado[0]==0){
  	return;
  }
  
	if(C=='V'){
		for(k=0;k<N;k++){
	 		tentativa[k]='1';
			resultado[a]=adivinhar(tentativa);
			//printf("%s\n",tentativa);
			//printf("%d\n",resultado[a]);
			if(resultado[a]==0){
					return;
				}		
			if(resultado[a]==N/2){
					c=0;
					if(tentativa[0]=='0'){
						tentativa[0]='1';
						c=1;
					}
					if(tentativa[0]=='1' && c==0){
						tentativa[0]='0';
						c=1;
					}
					for(i=1;i<N;i++){
						c=0;
						if(tentativa[i]=='0'){
						tentativa[i]='1';
						c=1;
						}
						if(tentativa[i]=='1' && c==0){
						tentativa[i]='0';
						c=1;
						}
						resultado[i]=adivinhar(tentativa);
						if(resultado[i]==0){
							return;
						}
						c=0;
						//printf("%d\n",resultado[i]);
						if(tentativa[i]=='0'){
						tentativa[i]='1';
						c=1;
						}
						if(tentativa[i]=='1' && c==0){
						tentativa[i]='0';
						c=1;
						}
						//printf("%s\n",tentativa);
					}
					for(i=1;i<N;i++){
						if(resultado[i]==N){
							c=0;
							if(tentativa[i]=='0'){
							tentativa[i]='1';
							c=1;
							}
							if(tentativa[i]=='1' && c==0){
							tentativa[i]='0';
							c=1;
							}
						}
					}
					//printf("%s\n",tentativa);
					resultado[0]=adivinhar(tentativa);
					if(resultado[0]!=0){
						for(i=0;i<N;i++){
						c=0;
							if(tentativa[i]=='0'){
							tentativa[i]='1';
							c=1;
							}
							if(tentativa[i]=='1' && c==0){
							tentativa[i]='0';
							c=1;
							}
						}
					}
					//printf("%s\n",tentativa);
					adivinhar(tentativa);
					}
			}
			
			a++;
}

  if(C=='L'){
  
  
  if(resultado[0]!=0){
  
  tentativa[0]='1';
  resultado[1] = adivinhar(tentativa);
  if(resultado[1]==0){
  	return;
  }
}
	if(resultado[1]!=0){

	for(i=1;i<N;i++){
		if(resultado[i]!=0){
		if(resultado[i]>=resultado[i-1]){
			tentativa[i-1]='0';
			tentativa[i]='1';
			resultado[i+1]= adivinhar(tentativa);
			if(resultado[i+1]==0){
				return;
			}		
		}	
		if(resultado[i]<resultado[i-1]){
			tentativa[i]='1';
			resultado[i+1]= adivinhar(tentativa);
			if(resultado[i+1]==0){
				return;
			}		
		}
	
}
}
}
}
}
