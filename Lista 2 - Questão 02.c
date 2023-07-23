#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 02. Crie um programa que leia dois números e mostre o maior deles. Se, por acaso,
os dois números forem iguais, imprima a mensagem “Números iguais”.
*/

int main(){
    setlocale(LC_ALL, ""); 
    
    int n1, n2;
    
    printf("informe dois numeros:\n");
    scanf("%i%i", &n1, &n2);
    
    if(n1 > n2){
	    printf("maior valor inserido %i\n\n", n1);
	}
   	else if(n1==n2){
		printf("os valores inserido são iguais\n\n");
	}
	else{
		printf("maior valor inserido %i\n\n", n2);
	}
    system("pause");
   return(0);
}
