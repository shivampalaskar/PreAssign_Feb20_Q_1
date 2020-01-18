/*
 ============================================================================
 Name        : PreAssign_Feb20_Q_1.c
 Author      : Shivam Palaskar
 Version     :
 Copyright   : Open source
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[] = "Welcome,to,Sunbeam,CDAC,Diploma,Course";
	printf("\nstring %u",string);
	printf("\n%s",string);
	char *point = strtok(string,",");

	while(point !=NULL){
		printf("\n%u %s",point,point);
		point = strtok(NULL,",");
	}
	return EXIT_SUCCESS;
}
