/*
 ============================================================================
 Name        : ProjetoC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int vet1[6],vet2[6];
	for(int i = 0;i < 6;i++){
		scanf("%d",&vet1[i]);
		vet2[i] = vet1[i];
	}
	for(int i = 0;i < 6;i++){
		printf("%d",vet2[i]);
	}
}

