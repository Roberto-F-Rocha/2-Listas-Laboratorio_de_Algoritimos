#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 07. Com a pandemia ocasionada pela COVID-19, as pessoas começaram a fazer
pesquisas para descobrir o melhor plano de saúde. Um dos planos mais aderidos está pautado
na idade das pessoas, conforme a apresentado na tabela abaixo:

De posse dessas informações, crie um programa que receba uma idade e mostre o valor a ser
pago para o plano de saúde.
*/
	
int main(){
	setlocale(LC_ALL, "");
	int idade;
	  	
	printf("planos de saúde:\n insira a sua idade:");
	scanf("%i", &idade);
	if(idade <= 10){
		printf("valor a ser pago para o plano de saúde R$30,00\n\n");
	}
	else if(idade > 10 && idade < 29){
	    printf("valor a ser pago para o plano de saúde R$60,00\n\n");
	}
	else if(idade > 29 && idade < 45){
	    printf("valor a ser pago para o plano de saúde R$120,00\n\n");
	}
	else if(idade > 45 && idade < 59){
	    printf("valor a ser pago para o plano de saúde R$150,00\n\n");
	}	
	else if(idade > 59){
	    printf("valor a ser pago para o plano de saúde R$300,00\n\n");
	}		
	
    system("pause");
 return(0);
}