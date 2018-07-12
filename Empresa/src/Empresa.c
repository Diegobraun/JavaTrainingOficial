/*
 ============================================================================
 Name        : Empresa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int countI,horasTrab,numDepends;
	float totTimePrice,totDependPrice,salFuncBruto,salFuncLiq,salFuncFinal,imposto;
	do{
		printf("Digite o código do funcionário: ");
		scanf("%d",&countI);
		printf("Digite o número de horas trabalhadas: ");
		scanf("%d",&horasTrab);
		printf("Digite o número de dependentes: ");
		scanf("%d",&numDepends);
		totTimePrice = horasTrab * 12;
		totDependPrice = numDepends * 40;
		salFuncBruto = totTimePrice + totDependPrice;
		imposto = salFuncBruto - salFuncLiq;
		salFuncLiq = salFuncBruto * ((100 - 86.5)/100);
		if(horasTrab <= 20){
			salFuncFinal = salFuncLiq + 10;
		}else{
			salFuncFinal = salFuncLiq;
		}
	}while(countI != 0);

		printf("O código do funcionário é ",countI);
		printf("\nO número de horas trabalhadas foi de: ",horasTrab);
		printf("\nOs valores de imposto são: ",imposto);
		printf("\nO salário liquido é: ",salFuncFinal);
}

/*1.	Uma determinada empresa armazena para cada funcionário uma ficha contendo o
 * código, o número de horas trabalhadas e o seu nº de dependentes. Considerando que:
a. A empresa paga 12 reais por hora e 40 reais por dependentes.
b. Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
c. a empresa paga um bônus de R$ 10,00 para quem trabalha 20 horas ou menos.
Faça um programa para ler o código, número de horas trabalhadas e número de dependentes
de cada funcionário. Após a leitura, escreva qual o código, os valores descontados para
cada tipo de imposto e finalmente o salário líquido de cada um dos funcionários.  Encerre
 a entrada de dados quando for digitado o código 0 (zero) para o código de funcionário.

 * */
