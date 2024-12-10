//Author: Rhode Aly Benjamin, Perry Guerrero, Daniel Chen
//Date: 12/10/2024
//Final Project

#include <stdio.h>
#define FILE1 "madlib1.txt"
#define rowIndex 100
#define columnIndex 100

void copyFunction(int rowIndex, int columnIndex, char originalString[][columnIndex]);
void ANV_Function(int rowIndex, char ANV_string[rowIndex]);
void userInput(int columnIndex, char AVN_string[columnIndex]);
void display(char adjective[], char noun[], char verb[]);
 
int main(){
	
	FILE *fp;
	fp = fopen(FILE1, "w");
	if(fp == NULL){
		printf("can't open file\n");
		return 0;
	}
	copyFunction(rowIndex, columnIndex, originalString[][columnIndex]);
	ANV_Function(rowIndex, ANV_string[rowIndex]);
	userInput(columnIndex, AVN_string[columnIndex]);
	display(adjective, noun, verb);
	
	fclose(fp);
	
	return 0;
	}

void copyFunction(int rowIndex, int columnIndex, char originalString[][columnIndex]){

	char *originalstring[rowIndex][columnIndex];

	for(int row = 0; row <= rowIndex; row++){
		for(int column = 0; column <= columnIndex; column++){
		fscanf(filepointer, "%c", originalstring[row][column]);
			}
		}
	}
	
void ANV_Function(int rowIndex, char ANV_string[rowIndex]){

	char ANV_string[rowIndex]

	int a = 0;
	for(int i =0; i <= columnIndex; i++){
		if(i % 2 = 1){
			ANV_string[a] = originalstring[i][0];
			a++;
		}
	}
}

void userInput(int columnIndex, char AVN_string[columnIndex]){

	char AVN_string[columnIndex];
	
	switch(AVN_string[i]){
	case N:
		printf("Enter a None:\n");
		scanf(" %s", &AVN_string[i]);
		break;
	case A:
		printf("Enter a Adjective:\n");
		scanf(" %s", &AVN_string[i]);
		break;
	case V:
		printf("Enter a Verb:\n");
		scanf(" %s", &AVN_string[i]);
		break;
		}
}
	
void display(int rowIndex, int columnIndex, char originalString[][columnIndex]){
	for(int line = 0; line < rowIndex; line++){
		for(int value = 0; value < columnIndex; value++){
			printf("%s", originalString[][columnIndex]);
			}
		printf("\n");
		}
	}
