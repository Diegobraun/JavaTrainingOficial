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
		printf("Digite o c�digo do funcion�rio: ");
		scanf("%d",&countI);
		printf("Digite o n�mero de horas trabalhadas: ");
		scanf("%d",&horasTrab);
		printf("Digite o n�mero de dependentes: ");
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

		printf("O c�digo do funcion�rio � ",countI);
		printf("\nO n�mero de horas trabalhadas foi de: ",horasTrab);
		printf("\nOs valores de imposto s�o: ",imposto);
		printf("\nO sal�rio liquido �: ",salFuncFinal);
}

/*1.	Uma determinada empresa armazena para cada funcion�rio uma ficha contendo o
 * c�digo, o n�mero de horas trabalhadas e o seu n� de dependentes. Considerando que:
a. A empresa paga 12 reais por hora e 40 reais por dependentes.
b. Sobre o sal�rio s�o feitos descontos de 8,5% para o INSS e 5% para IR.
c. a empresa paga um b�nus de R$ 10,00 para quem trabalha 20 horas ou menos.
Fa�a um programa para ler o c�digo, n�mero de horas trabalhadas e n�mero de dependentes
de cada funcion�rio. Ap�s a leitura, escreva qual o c�digo, os valores descontados para
cada tipo de imposto e finalmente o sal�rio l�quido de cada um dos funcion�rios.  Encerre
 a entrada de dados quando for digitado o c�digo 0 (zero) para o c�digo de funcion�rio.

 * */
