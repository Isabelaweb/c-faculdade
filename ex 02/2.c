#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	do{
		printf("\n Escolha seu sabor \n");
		printf("\t (1) Morango \n");
		printf("\t (2) Maracuja \n");
		printf("\t (3) Ninho com Nutella \n");
		printf("\t (4) Acai \n");
		
		scanf("%d", &i);	
	}while((i<1) || (i>4));
	
	switch(i){
		case 1: 
			printf("\t \t Morango");
			break;
		case 2: 
			printf("\t \t Maracuja");
			break;
		
		case 3: 
			printf("\t \t Ninho com Nutella");
			break;
			
		case 4: 
			printf("\t \t Acai");
			break;
	}
	
	return 0;
	
}


