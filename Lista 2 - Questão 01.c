#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 01. Crie um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.
*/

int main(){
    setlocale(LC_ALL, ""); 
    int n1, soma=1;
    
    printf("digite um número: ");
    scanf("%i", &n1);
    
    if(n1 % 2 == 0){
        printf("\nesse número é par\n\n");
        soma++;
	}
		
    else{
		printf("esse número é impar\n\n");
		printf("%i\n\n", soma);
	}

    system("pause");
   return(0);
}
