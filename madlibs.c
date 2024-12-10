//Author: Rhode Aly Benjamin, Perry Guerrero, Daniel Chen
//Date: 12/10/2024
//Final Project

#include <stdio.h>
#define FILE1 "madlib1.txt"
#define ROWINDEX 100
#define COLUMNINDEX 100

void copyFunction(int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]);
void ANV_Function(int rowIndex, char ANV_string[ROWINDEX]);
void userInput(int columnIndex, char AVN_string[COLUMNINDEX]);
void display(int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]);
 
int main(){
	
	char ANV_string[ROWINDEX], AVN_string[COLUMNINDEX], originalString[][COLUMNINDEX];
	
	FILE *fp;
	fp = fopen(FILE1, "w");
	if(fp == NULL){
		printf("can't open file\n");
		return 0;
	}
	copyFunction(ROWINDEX, COLUMNINDEX, originalString);
	ANV_Function(ROWINDEX, ANV_string);
	userInput(COLUMNINDEX, AVN_string);
	display(ROWINDEX, COLUMNINDEX, originalString);
	
	fclose(fp);
	
	return 0;
	}

void copyFunction(int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]){

	char *originalstring[ROWINDEX][COLUMNINDEX];

	for(int row = 0; row <= rowIndex; row++){
		for(int column = 0; column <= columnIndex; column++){
		fscanf(filepointer, "%c", originalstring[row][column]);
			}
		}
	}
	
void ANV_Function(int rowIndex, char ANV_string[ROWINDEX]){

	char ANV_string[ROWINDEX];

	int a = 0;
	for(int i =0; i <= columnIndex; i++){
		if(i % 2 = 1){
			ANV_string[a] = originalstring[i][0];
			a++;
		}
	}
}

void userInput(int columnIndex, char AVN_string[COLUMINDEX]){

	char AVN_string[COLUMNINDEX];
	
	switch(AVN_string[i]){
		case 'N':
			printf("Enter a Noun:\n");
			scanf(" %s", &AVN_string[i]);
		break;
		case 'A':
			printf("Enter a Adjective:\n");
			scanf(" %s", &AVN_string[i]);
		break;
		case 'V':
			printf("Enter a Verb:\n");
			scanf(" %s", &AVN_string[i]);
		break;
		}
}
	
void display(int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]){
	for(int line = 0; line < rowIndex; line++){
		for(int value = 0; value < columnIndex; value++){
			printf("%s", originalString);
			}
		printf("\n");
		}
	}
