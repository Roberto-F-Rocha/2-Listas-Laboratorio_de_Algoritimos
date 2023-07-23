#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
/*
Exercício 14. Crie um programa que receba a altura e o peso de uma pessoa. De acordo com
a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
*/

int main(){
	setlocale(LC_ALL, "");
	  	
	float altura, peso;
	  	
	printf("informe sua altuma:  ");
	scanf("%f", &altura);

	printf("informe o seu peso: \n");
	scanf("%f", &peso);
	
	if(altura < 1.20 && peso <= 60){		 	
		printf("sua classificação é (A) \n\n");
	} 
	else if(altura < 1.20 && peso > 60 && peso < 90){
		printf("sua classificação é (D) \n\n");   
	}
	else if(altura < 1.20 && peso > 90){
		printf("sua classificação é (G) \n\n");   
	}
	else if(altura > 1.20 && altura < 1.70 && peso <= 60){
		printf("sua classificação é (B) \n\n");   
	}
	else if(altura > 1.20 && altura < 1.70 && peso > 60 && peso < 90){
		printf("sua classificação é (E) \n\n");   
	}
	else if(altura > 1.20 && altura < 1.70 && peso > 90){
		printf("sua classificação é (H) \n\n");   
    }
	else if(altura > 1.70 && peso <= 60){
		printf("sua classificação é (C) \n\n");   
	}
	else if(altura > 1.70 && peso > 60 && peso < 90){
		printf("sua classificação é (F) \n\n");   
	}
	else if(altura > 1.70 && peso > 90){
		printf("sua classificação é (I) \n\n");   
	}
    system("pause");
 return(0);
}