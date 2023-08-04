#include <stdio.h>
#include <conio.h>

//2.Escreva um programa para ler as dimensões de uma cozinha retangular
//(comprimento, largura e altura), calcular e escrever a quantidade de caixas de azulejos
//para se colocar em todas as suas paredes (considere que não será descontada a área ocupada
//por portas e janelas).
//Cada caixa de azulejos possui 1,5 m2.

void main (){
	float comp, larg, alt, area, piso;
	
	printf("\n>>>INFORME DAS DIMENSOES DE UMA COZINHA<<<");
	printf("\nInforme o comprimento da cozinha: ");
	scanf("%f", &comp);
	printf("\nInforme a largura da cozinha : ");
	scanf("%f", &larg);
	printf("\nInforme a altura da cozinha : ");
	scanf("%f", &alt);
	
	area = (larg * alt * 2) + (comp * alt * 2);
	piso = area / 1.5;
			
	printf("\nA quantidade de azulejos eh: %0.2f", area);
	printf("\nTotal de caixas de piso: %0.2f", piso);
}
