#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 10. Crie um programa que leia o salário de um trabalhador e o valor da prestação
de um empréstimo. Se a prestação:
I. For maior que 20% do salário, imprima “Empréstimo não concedido”;
II. Caso contrário, imprima “Empréstimo concedido”.
*/

int main(){
    setlocale(LC_ALL, "");

    float salario, prestacao;
  
    printf("informe seu salário: ");
    scanf("%f", &salario);

	printf("\ninforme o valor da prestação: ");
	scanf("%f", &prestacao);

	if(prestacao > salario * 0.2){	
	    printf("\nempréstimo não concedido! :(\n\n");
    }
	else{
		printf("\nespréstimo concedido! :)\n\n");
	}

	system("pause");
 return(0);
}