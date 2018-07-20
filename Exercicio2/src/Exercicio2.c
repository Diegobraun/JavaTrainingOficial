/*
 ============================================================================
 Name        : Exercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int i = 0,idade1,idade2, year = 2018;;
	float alturaChico = 1.50,alturaZe = 1.10;
	do{
		if(alturaChico > alturaZe){
			year++;
			alturaChico = alturaChico + 0.02;
			alturaZe = alturaZe + 0.03;
		}
		i++;
	}while(alturaChico > alturaZe);
	printf("O ano que estamos agora é %d",year);
	return 0;
}
/*2. Chico tem 1,50 metro e cresce 2 centímetros por ano,
 *
  enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
 Construa um algoritmo que calcule e imprima quantos anos serão
 necessários para que Zé seja maior que Chico.*/
