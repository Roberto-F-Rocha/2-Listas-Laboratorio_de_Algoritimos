#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 05. O programa de fidelidade da livraria Lablivre premia seus clientes de acordo
com o número de livros comprados a cada mês. Os pontos são distribuídos da seguinte forma:

I. Se um cliente comprar um livro, ele ganhará 5 pontos;
II. Se um cliente comprar dois livros, ele ganhará 15 pontos;
III. Se um cliente comprar três livros, ele ganhará 30 pontos;
IV. Se um cliente comprar quatro ou mais livros, ele ganhará 60 pontos.
*/

int main(){
	  setlocale(LC_ALL, "");
			
    int livrosComprados, pontuacao;
	
  	printf("Digite o total de livros comprados no mës: ");
  	scanf("%i", &livrosComprados);
 	 
	if(livrosComprados == 1){
  		pontuacao = 5;
  	}
  	else if(livrosComprados == 2){
  		pontuacao = 15;
  	}
  	else if(livrosComprados == 3){
  		pontuacao = 30;
  	}
  	else if(livrosComprados >= 4){
  		pontuacao = 60;
  	}
  	
  	printf("\n\tTotal de pontos: %i\n\n", pontuacao);
  	
  	system("pause");
 	 return(0);
}