#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 15. Crie um programa que receba o comprimento dos três lados de um triângulo (a,
b, c) e determine o tipo de triângulo, com base nos seguintes casos:
I. Se 𝑎² = 𝑏² + 𝑐², é formado um triângulo retângulo;
II. Se 𝑎² > 𝑏² + 𝑐², é formado um triângulo obtusângulo;
III. Se 𝑎² < 𝑏² + 𝑐², é formado um triângulo acutângulo.
*/

int main(){
    setlocale(LC_ALL, "");
    
    int a, b, c;
    
    printf("informe os três lados de um triângulo\n");
    printf("A: ");
    scanf("%i", &a);
    
    printf("B: ");
    scanf("%i", &b);
    
    printf("C: ");
    scanf("%i", &c);
    
    if(a == b + c){
        printf("triângulo retângulo\n\n");
	}
    else if(a > b + c){
        printf("triângulo obtusângulo\n\n");
	}
    else if(a < b + c){
    	printf("triângulo acutângulo\n\n");
	}

	system("pause");
 return(0);
}