#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
Exercício 09. Crie um programa que leia um número real e, caso ele seja positivo, calcule e
mostre:
I. O número digitado ao quadrado;
II. A raiz quadrada do número digitado.
*/

int main(){
	setlocale(LC_ALL, "");
	  
	float n1, raiz, quadrado;

	printf("insira um número: ");
	scanf("%f", &n1);
	  
	if(n1 < 1){
       printf("\n\nnumero igual ou abaixo de zero :( \n\n");
	}
	else{
		quadrado = pow(n1,2);
		printf("\n\nO número digitado ao quadrado é igual a %.0f\n\n", quadrado);
		raiz = sqrt(n1);
		printf("A raiz quadrada do número digitado é %.2f\n\n", raiz);
	}
		
    system("pause");
 return(0);
}