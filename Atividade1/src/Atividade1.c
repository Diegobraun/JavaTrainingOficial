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
    	printf("Digite quantos filhos voc� tem: ");
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
    	printf("A media de sal�rio da popula��o � %f",mediaSal);
    	printf("\nA media de n�mero de filhos � %d",mediaSon);
    	printf("\nO maior sal�rio foi de %f",maiorSal);
    	printf("\nO percentual de pessoas com salario at� 100 � %f",mediaSalMenor);
    return 0;
}
/*1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
 * dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at� R$ 100,00.
O final da leitura de dados se dar� com a entrada de um sal�rio negativo.
 * */
