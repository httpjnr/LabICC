#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=8;
	int op,tp,sp;
	
	printf("\nPense em um numero de 1 a 15\n");
	printf("Pensou? Digite 1 \n");
	scanf("%d",&op);
	
	if(op==1){
		
		printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		scanf("%d",&tp);
		
		if(tp==1) printf("PC acertou!");
		
		else{
			printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			scanf("%d",&sp);
			
			if(sp==1){
				n=n+4;
				printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        scanf("%d",&tp);
		        
		        if(tp==1) printf("PC acertou!");
		        
		        else{
		        	printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			        scanf("%d",&sp);
			        
			        if(sp==1){
						n=n+2;
						printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        		scanf("%d",&tp);
		        
		       			if(tp==1) printf("PC acertou!");
		       			
		       			else{
		        			printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			        		scanf("%d",&sp);
			        
			        		if(sp==1){
							n=n+1;
							printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
							if(tp==1) printf("PC acertou!");
							else printf("PC errou!");	}
		        			else{
		        			n=n-1;
		        			printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
		        			if(tp==1) printf("PC acertou!");
							else printf("PC errou!");
							}	
			}
						}
					else{
							n=n-2;
						printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        		scanf("%d",&tp);
		        
		       			if(tp==1) printf("PC acertou!");
		       			
		       			else{
		        			printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			        		scanf("%d",&sp);
			        
			        		if(sp==1){
							n=n+1;
							printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
							if(tp==1) printf("PC acertou!");
							else printf("PC errou!");	}
		        			else{
		        			n=n-1;
		        			printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
		        			if(tp==1) printf("PC acertou!");
							else printf("PC errou!");
							}	
			}
							
						}							
	}	
}
            else{
            	n=n-4;
            	printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        scanf("%d",&tp);
		        
		        if(tp==1) printf("PC acertou!");
		        
		        else{
		        	printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			        scanf("%d",&sp);
			        
			        if(sp==1){
						n=n+2;
						printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        		scanf("%d",&tp);
		        
		       			if(tp==1) printf("PC acertou!");
		       			
		       			else{
		        			printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			        		scanf("%d",&sp);
			        
			        		if(sp==1){
							n=n+1;
							printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
							if(tp==1) printf("PC acertou!");
							else printf("PC errou!");	}
		        			else{
		        			n=n-1;
		        			printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
		        			if(tp==1) printf("PC acertou!");
							else printf("PC errou!");
							}
			}
}
                    else{
                    	n=n-2;
						printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        		scanf("%d",&tp);
		        
		       			if(tp==1) printf("PC acertou!");
		       			
		       			else{
		        			printf("\n O numero que vc pensou eh menor ou maior que %d? 1- Maior  2-Menor\n",n);
			        		scanf("%d",&sp);
			        
			        		if(sp==1){
							n=n+1;
							printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
							if(tp==1) printf("PC acertou!");
							else printf("PC errou!");	}
		        			else{
		        			n=n-1;
		        			printf("\n O numero que vc pensou eh %d? 1- Sim  2-Nao\n",n);
		        			scanf("%d",&tp);
		        			if(tp==1) printf("PC acertou!");
							else printf("PC errou!");
							}
			}
}
}
}
}
}
 getch();
 return 0; 
}

