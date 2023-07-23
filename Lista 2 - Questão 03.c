#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 03. Crie um programa que leia três números fornecidos pelo usuário e mostre se a
soma de dois deles resulta no terceiro.
*/

int main(){
	setlocale(LC_ALL, "");
	
  	float n1, n2, n3;
	
  	printf("Digite três valores: ");
  	scanf("%f%f%f", &n1, &n2, &n3);
	
  	float soma = n1 + n2;
	
  	if(soma == n3){
	  	printf("A soma de %.1f + %.1f é %.1f\n\n", n1, n2, n3);
  	}
  	else{
	  	printf("A soma de n1 + n2 não resulta em n3!\n\n");
	}
	
	system("pause");
 return(0);
}