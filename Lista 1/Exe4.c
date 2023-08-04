#include <stdio.h>
#include <conio.h>

//4. [FOR] Escreva um algoritmo em que leia 20 números e imprima a soma dos positivos e o total de números negativos. 

void main(){
	int num, i, cont_neg = 0, soma_posi;
	
	for(i=1; i<=9; i++){
		printf("\nInforme um numero: ");
		scanf("%d", &num);
		if(num < 0){//negativo
		cont_neg++;
		}
		else{ //positivos
			soma_posi += num;
		}
	}
	printf("\nQuantidade de negativos: %d", cont_neg);
	printf("\nSoma dos positivos: %d", soma_posi);
}
 
