/*
 ============================================================================
 Name        : UserInput.c
 Author      : VerfluchteZocke
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 TASK: TASK:
Develop a program in Python in which you ask the user to enter his name, gender, degree program and matriculation number. Then output this data formatted.

a. As far as possible, check the user input for plausibility.

b. Extend the program to allow repeated input of the data and its output.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




int main(void) {
	//Get valid user input for sex, studyfield and matriculationnumber (check for correct data type,
	//if it is not the correct data type, ask for input again
	printf("Enter your sex:");
	char sex[10] = "";
	scanf("%s", &sex);

	printf("Enter your studyfield:");
	char studyfield[40] = "";
	scanf("%s", &studyfield);

	int correctDataTypeMatriculationNumber = 0;
	int matriculationNumber = 0;
	while(correctDataTypeMatriculationNumber == 0){
		printf("Enter your matriculation number:\n");
		scanf("%d", &matriculationNumber);
		if(matriculationNumber > 9999)
			correctDataTypeMatriculationNumber = 1;
		else
			printf("Your entered matriculation number is too small - this can't be a correct number. Please try again.");
	}

	printf("Your sex is: %s \n", sex);
	printf("Your studyfield is: %s\n", studyfield);
	printf("Your matriculation number is: %d\n", matriculationNumber);
}
