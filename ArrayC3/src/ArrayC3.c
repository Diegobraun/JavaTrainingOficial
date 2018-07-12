/*
 ============================================================================
 Name        : ArrayC3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int values[10],valuesPares[10],valuesImpar[10];
	for(int i = 0;i < 10;i++){
		scanf("%d",&values[i]);
		if(values[i] % 2 == 0){
			valuesPares[i] = values[i];
		}else{
			valuesImpar[i] = values[i];
		}
	}
	for(int i = 0;i < 10;i++){
		printf("\nPrintando a array de pares: ");
		if(valuesPares[i] == 0){
			valuesPares[i] = 100;
			printf("\n%d",valuesPares[i]);
		}else{
			printf("\n%d",valuesPares[i]);
		}
	}
	for(int i = 0;i < 10;i++){
		printf("\nPrintando a array de impares: ");
		if(valuesImpar[i] == 0){
			valuesImpar[i] = 101;
			printf("\n%d",valuesImpar[i]);
		}else{
			printf("\n%d",valuesImpar[i]);
		}
	}
}
//criar um array e carregar as posições, fazer outros 2 vetores, um dos numeros impares e outro pares
