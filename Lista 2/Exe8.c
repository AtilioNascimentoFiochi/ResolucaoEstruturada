#include <stdio.h>
#include <conio.h>

//8 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 3 Notas
//3 - Maior N�mero
//4 - Menor N�mero
//5 Sair

void menu(){
	int opcao;
	do{
		system("cls");
		printf("Informe a Opcao: "):
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 3 Notas");
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n5 - Sair");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			calcular_idade();
		}
		else
			if(opcao == 2){ //media tres notas();
				media_tres_notas();
			}
			else
				if(opcao == 3){ //Maior Numero():
				   maior_numero();
				}
				else
					if(opcao == 4){ //menor numero();
					
					
					}
					
	}while(opcao != 5);
}

void main(){
	
}
