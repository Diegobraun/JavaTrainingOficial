/*
 ============================================================================
 Name        : Atividade1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0,sonNum,numPessoa;
    float salarioNum,mediaSal,mediaSon,maiorSal,menorSal,mediaSalMenor;
    do{
    	printf("Digite o seu salario: ");
    	scanf("%f",&salarioNum);
    	printf("Digite quantos filhos você tem: ");
    	scanf("%d",sonNum);
    	mediaSal = (mediaSal + salarioNum)/i;
    	mediaSon = (mediaSon + sonNum)/i;
    	if(i==0){
    		maiorSal = salarioNum;
    		menorSal = salarioNum;
    	}else{
    		if(salarioNum > maiorSal){
    			maiorSal = salarioNum;
    		}
    		if(salarioNum < menorSal){
    			menorSal = salarioNum;
    		}

    	}
    	if(salarioNum < 100.01){
    		numPessoa++;
    		mediaSalMenor = numPessoa / i;
    	}
    	i++;
    }while(salarioNum > -1);
    	printf("A media de salário da população é %f",mediaSal);
    	printf("\nA media de número de filhos é %d",mediaSon);
    	printf("\nO maior salário foi de %f",maiorSal);
    	printf("\nO percentual de pessoas com salario até 100 é %f",mediaSalMenor);
    return 0;
}
/*1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
 * dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
 * */
