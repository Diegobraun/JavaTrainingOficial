/*
 ============================================================================
 Name        : ArrayC2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int values [10], temp;
	for (int i=0; i<10; i++){
		scanf("%d",&temp);
		if (temp > -251 && temp < 351){
			(values[i] = temp);
		}else{
			(values[i] = 999);
		}
	}
	for(int i=0; i<10; i++){
		printf("\n%d",values[i]);
	}
}
