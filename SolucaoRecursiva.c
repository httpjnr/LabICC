#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=8;
	int tt=1;
	int op,tp,sp;
	
	printf("\nPense em um numero de 1 a 15\n");
	printf("Pensou? Digite 1 \n");
	scanf("%d",&op);
	
	if(op==1)
	funcao(n,tt);
}

void funcao(int n, int tt){
	    int tp,sp;
	    
	    printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		scanf("%d",&tp);
		
		if(tp==1) {
		printf("PC acertou!");
		return 0;}
		
		else{
			printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			scanf("%d",&sp);
			
			if(sp==1 && tt==1){
				n=n+4;
				tt=tt+1;
				funcao(n,tt);
			}
			if(sp==2 && tt==1){
				n=n-4;
				tt=tt+1;
				funcao(n,tt);
			}
			if(sp==1 && tt==2){
				n=n+2;
				tt=tt+1;
				funcao(n,tt);
			}
			if(sp==2 && tt==2){
				n=n-2;
				tt=tt+1;
				funcao(n,tt);
			}
			if(sp==1 && tt==3){
				n=n+1;
				tt=tt+1;
				funcao(n,tt);
			}
			if(sp==2 && tt==3){
				n=n-1;
				tt=tt+1;
				funcao(n,tt);
			}
			}
}




