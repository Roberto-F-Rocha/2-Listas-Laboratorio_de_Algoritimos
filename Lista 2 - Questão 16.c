#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Exercício 16. Crie um programa que leia três números reais positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário. Leve em
consideração as fórmulas dispostas na tabela a seguir:
*/

int main(){
    setlocale(LC_ALL, "");
    
    int x, y, z, escolha;
    float media;
    
    printf("informe os três números \n");
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    system("cls");

    printf("informe qual media você gostaria de calcular \n");
    printf("|1| para média geométrica: \n|2| para média Ponderada: \n|3| para média Harmônica: \n|4| para média Aritmética: \n");
    scanf("%i", &escolha);

    switch(escolha){
		case 1: 
			media = cbrt(x * y * z);
		    printf("média geométrica igual a: %f\n\n", media);
		break;
	    case 2:
	  	    media = ((1*x)+(2*y)+(3*z))/6;
	  	    printf("média ponderada	 igual a: %.0f\n\n", media);
	    break;
	    case 3:
	  	    media = 3/((1/x)+(1/y)+(1/z));	
	  	    printf("média harmônica igual a: %f\n\n", media);
	    break;
	    case 4:
	  	    media = (x+y+z)/3;
	  	    printf("média aritmédica igual a: %f\n\n", media);
 	    break;
	}
	system("pause");
 return(0);

}