#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
/*
Exercício 13. A empresa Zirlangio Software decidiu conceder um aumento de salários a seus
funcionários de acordo com a tabela abaixo:
Crie um programa que receba o número do funcionário e seu salário atual. Em seguida,
calcule e apresente o percentual de aumento e o valor do salário corrigido.
*/

int main(){
	setlocale(LC_ALL, "");
	  	
	int funcionarios;
	float salario, aumento;
	  	
	printf("número de funcionários:  ");
	scanf("%i", &funcionarios);

	printf("salario atual:");
	scanf("%f", &salario);

	if(salario <= 400){		 	
		aumento = salario + (salario * 0.16);
		printf("aumento de 16 porcento valor do salário corrigido %.2f\n\n", aumento);
	}
	else if(salario > 400 && salario < 700){
	    aumento = salario + (salario * 0.12);
		printf("aumento de 12 porcento valor do salário corrigido %.2f\n\n", aumento);   
	}
	else if(salario > 700 && salario < 1000){
	    aumento = salario + (salario * 0.10);
		printf("aumento de 10 porcento valor do salário corrigido %.2f\n\n", aumento);  
    }
	else if(salario > 1000 && salario < 1800){
	    aumento = salario + (salario * 0.8);
		printf("aumento de 8 porcento valor do salário corrigido %.2f\n\n", aumento);   
	}	
	else if(salario >  1800 && salario < 2500){
	    aumento = salario + (salario * 0.4);
		printf("aumento de 4 porcento valor do salário corrigido %.2f\n\n", aumento);   
	}	
	else if(salario >  2500){
		printf("não houve aumento!, valor do salário  %.2f\n\n", aumento);	
	}
	system("pause");
 return(0);
}