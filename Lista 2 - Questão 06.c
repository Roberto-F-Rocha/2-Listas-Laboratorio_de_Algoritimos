#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 06. Crie um programa que leia o código de um determinado produto e mostre a sua
classificação de acordo com a tabela abaixo:
*/

int main(){
  	setlocale(LC_ALL, "");
		
	int codigo;
			
	printf("\n Classificação do produto\n Digite o código do produto ");
	scanf("%i", &codigo);
	switch(codigo){
	    case 1:
        case 2:
			printf("\n Alimento não-perecível:\n\n", codigo);
			break;
		case 3:
		case 4:	
			printf("\n Alimento perecível: \n\n", codigo);
			break;
		case 5:
		case 6:	
			printf("\n Vestuário: \n\n", codigo);
			break;
		case 7:
		case 8:	
			printf("\n Higiene pessoal: \n\n", codigo);
			break;
	    case 9:
		case 10:	
			printf("\n Utensílios domésticos: \n\n", codigo);
			break;
		}

    system("pause");
 	 return(0);
}