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
		printf("\nDigite a resposta da questão: ");
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
	printf("O aluno teve a pontuação de %d",pont);
	printf("\nO aluno teve erros de %d",erros);
	printf("A situação do aluno é %d",approved);

}
/* Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes.
 * A prova consta de 30 questões, cada uma com cinco alternativas identificadas por A, B, C,
 * D e E. Para isso são dados:

o cartão gabarito;
o número de alunos da turma;
o cartão de respostas para cada aluno, contendo o seu número e suas respostas. */
