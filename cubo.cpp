/*
Implemente um sistema utilizando 
função que leia um valor e apresente
para o usuario o valor do CUBO do valor digitado.
ULTILIZANDO FUNÇAO 
*/
#include <stdio.h>


//Funcao chamada soma - Start

void CUBO(int a) // Recebe valores parametrizados
{

	int calculo; //variavel
	calculo = ( a * a * a); // Processamento
	
	printf("Resultado:%d",calculo);	// Saida	
}


int main()
{
	int valor01; // Declaracao de variavel

	printf("Entre com o valor desejado:"); // Saida
	scanf("%d",&valor01); //Entrada de valores pelo usuario

	
	CUBO(valor01);// chamamento da funcao
	
	return 0;
}
