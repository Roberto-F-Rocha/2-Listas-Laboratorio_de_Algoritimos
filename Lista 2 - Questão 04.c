#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 04. Crie um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a esse número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.
Trate também o caso do usuário inserir um valor fora desse intervalo.
*/

int main(){
  	setlocale(LC_ALL, "");
		
		int dia;
			
	  printf("\nbora saber qual é o dia da semana? :)\n\nbora lá!\n\ndigite um numero: ");
	  scanf("%i", &dia);
	  switch(dia){
			case 1:
				printf("\a\n%i é domingo\n\n", dia);
				break;
			case 2:
				printf("\a\n%i é segunda-feira\n\n", dia);
				break;
			case 3:
				printf("\a\n%i é terça-feira\n\n", dia);
				break;
			case 4:
				printf("\a\n%i é quarta-feira\n\n", dia);
				break;
			case 5:
				printf("\a\n%i é quinta-feira\n\n", dia);
				break;
			case 6:
				printf("\a\n%i é sexta-feira\n\n", dia);
				break;
			case 7:
				printf("\a\n%i é sabado\n\n", dia);
				break;
		}

    system("pause");
 return(0);
}