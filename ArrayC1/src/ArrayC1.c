/*
 ============================================================================
 Name        : ArrayC1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
main(){
	int values[10],maior;
	for(int i = 0;i < 10;i++){
		scanf("%d",&values[i]);
		printf("%d",values[i]);
		if(i == 0){
			maior = values[i];
		}else{
			if(values[i] > maior){
				maior = values[i];
			}
		}
	}
	printf("O maior valor é: %d",maior);
}


