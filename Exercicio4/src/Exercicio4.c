/*
 ============================================================================
 Name        : Exercicio4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int i,numCod,maior,menor;
	do{
		printf("Digite um n�mero: ");
		scanf("%d",&numCod);
		if(i == 0){
			maior = numCod;
			menor = numCod;
		}else{
			if(numCod > maior){
				maior = numCod;
			}
			if(numCod < menor){
				menor = numCod;
			}
		}
			i++;
	}while(numCod != 0);
	printf("Maior n�mero: %d",maior);
	printf("Menor n�mero: %d",menor);
	return 0;
}
/*4. Escreva um algoritmo que leia um n�mero indeterminado
 * de valores inteiros positivos e encontre o maior e o menor
 *  deles. Mostre o resultado.*/
