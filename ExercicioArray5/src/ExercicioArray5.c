/*
 ============================================================================
 Name        : ExercicioArray5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int values[5],maior,menor,indMaior;
	for(int i = 0;i < 5;i++){
		scanf("%d",&values[i]);
		if(i == 0){
			maior = values[i];
		}else{
			if(values[i] > maior){
				indMaior = i;
			}else{
				indMaior = 0;
			}
		}
	}
	printf("A posição com maior valor é %d",indMaior);
}
/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/
