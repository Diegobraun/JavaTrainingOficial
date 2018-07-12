/*
 ============================================================================
 Name        : Exercicio3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int i = 0,cod = 0,quant1,quant2,quant3,quant4,quant5,quant6;
	while(cod == 0){
		printf("Digite o candidato que deseja votar: ");
		printf("\n[1]Carlos ");
		printf("\n[2]Cláudio ");
		printf("\n[3]Alfred ");
		printf("\n[4]Ítalo ");
		printf("\n[5]Nulo ");
		printf("\n[6]Branco ");
		printf("\n\nDigite o seu candidato: ");
		scanf("%d",&cod);
		if(cod==1){
			quant1++;
		}else if(cod==2){
			quant2++;
		}else if(cod==3){
			quant3++;
		}else if(cod == 4){
			quant4++;
		}else if(cod==5){
			quant5++;
		}else if(cod==6){
			quant6++;
		}
		i++;
	}
	printf("Total de votos para o candidato 1: %d",quant1);
	printf("Total de votos para o candidato 2: %d",quant2);
	printf("Total de votos para o candidato 3: %d",quant3);
	printf("Total de votos para o candidato 4: %d",quant4);
	printf("Total de votos nulos: %d",quant5);
	printf("Total de votos brancos: %d",quant6);
	return 0;
}
/*3. Em uma eleição presidencial existem quatro candidatos. Os votos são informados
 * através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
 *  codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.
 * */
