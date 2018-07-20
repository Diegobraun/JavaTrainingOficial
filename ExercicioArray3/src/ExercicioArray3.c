/*
 ============================================================================
 Name        : ExercicioArray3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int values[5],num;
	for(int i = 0;i < 5;i++){
		printf("\nDigite um numero: ");
		scanf("%d",&num);
		values[i] = num;
	}
	for(int i = 4;i > -1;i--){
		printf("\n%d",values[i]);
	}
}
/*Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura*/
