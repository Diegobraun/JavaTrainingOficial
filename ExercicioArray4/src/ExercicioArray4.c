/*
 ============================================================================
 Name        : ExercicioArray4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int values[10],aluno[10],pont,erros;
	int approved;
	for(int i = 0;i < 10;i++){
		printf("\nDigite a resposta da quest�o: ");
		scanf("%d",&values[i]);
	}
	for(int i = 0;i < 10;i++){
		printf("Digite a resposta do aluno: ");
		scanf("%d",&aluno[i]);
	}
	for(int i = 0;i < 10;i++){
		if(values[i] == aluno[i]){
			pont = pont + 1;
		}else{
			erros = erros + 1;
		}
	}
	if(pont >= 6){
		approved = 1;
	}else{
		approved = 0;
	}
	printf("O aluno teve a pontua��o de %d",pont);
	printf("\nO aluno teve erros de %d",erros);
	printf("A situa��o do aluno � %d",approved);

}
/* Deseja-se publicar o n�mero de acertos de cada aluno em uma prova em forma de testes.
 * A prova consta de 30 quest�es, cada uma com cinco alternativas identificadas por A, B, C,
 * D e E. Para isso s�o dados:

o cart�o gabarito;
o n�mero de alunos da turma;
o cart�o de respostas para cada aluno, contendo o seu n�mero e suas respostas. */
