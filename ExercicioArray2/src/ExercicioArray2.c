/*
 ============================================================================
 Name        : ExercicioArray2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int array[10],num;
	for(int i = 0;i < 5;i++){
		printf("\nDigite um numero: ");
		scanf("%d",&num);
		array[i] = num;
	}
	for(int i = 5;i < 10;i++){
		int acum = 1;
		acum = acum+(i-4);
		array[i] = array[i-5]*acum;
	}
	for(int i = 0;i < 10;i++){
		printf("\nValor do array: %d",array[i]);
	}


}
/*Ler 5 valores inteiros e armazenar nas posi��es iniciais de um vetor de 10 posi��es.
 *  Nas posi��es seguintes, armazenar sucessivamente o dobro da primeira posi��o, o triplo
 *   da segunda posi��o, etc.  Mostrar os valores armazenados em cada posi��o do vetor.
 * */
