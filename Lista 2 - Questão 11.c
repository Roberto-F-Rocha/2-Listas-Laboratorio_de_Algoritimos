#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 11. A empresa Wolf Systems concedeu um bônus de 16% do valor do salário a
todos os funcionários com tempo de trabalho na empresa igual ou superior a 5 anos e de 10%
aos demais. Crie um algoritmo que receba o salário e o tempo de serviço de um funcionário,
calcule e mostre o valor do bônus recebido por ele.
*/

int main(){
    setlocale(LC_ALL, "");

	float salario, bonus;
	int tempo;

	printf("informe o seu salário na empresa: R$"); 
	scanf("%f", &salario);
	system("cls");

	printf("informe o seu tempo de serviço na empresa em anos:\n:");
	scanf("%i", &tempo);
	system("cls");

	if(tempo >= 5){
		bonus = salario + (salario * 0.16);  
		printf("obrigado por trabalhar arduamente por tanto tempo na empresa \3\n\n ");
		printf("seu salário com bonus: R$%.2f\n\n", bonus);
	}
	else{
        bonus = salario + (salario * 0.10);
		printf("seu salário com bonus: R$%.2f\n\n", bonus);
    }

	system("pause");
 return(0);

}