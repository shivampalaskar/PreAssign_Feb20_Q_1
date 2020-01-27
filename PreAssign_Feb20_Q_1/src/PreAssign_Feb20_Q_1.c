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

#include <stdio.h>

int main(int argcnt, char *string[]) {
	if(argcnt!=2)
		return 0;
	char *point = strtok(string[1],",");

	while(point !=NULL){
		printf("\n%s",point);
		point = strtok(NULL,",");
	}
	//NOTE:Original string gets manipulated after strtok() function
	return EXIT_SUCCESS;
}
