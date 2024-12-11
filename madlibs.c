//Author: Rhode Aly Benjamin, Perry Guerrero, Daniel Chen
//Date: 12/10/2024
//Final Project

#include <stdio.h>
#define FILE1 "madlib1.txt"
#define ROWINDEX 100
#define COLUMNINDEX 100

void copyFunction(FILE* fp, int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]);
void ANV_Function(int rowIndex, char ANV_string[rowIndex], char originalString[][COLUMNINDEX]);
void userInput(int rowIndex, char ANV_string[rowIndex]);
void display(int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]);
 
int main(){
	
	int rowIndex, columnIndex;
	char ANV_string[ROWINDEX];
	char originalString[ROWINDEX][COLUMNINDEX];
	
	FILE *fp;
	fp = fopen(FILE1, "w");
	if(fp == NULL){
		printf("can't open file\n");
		return 0;
	}
	copyFunction(fp, rowIndex, columnIndex, originalString);
	ANV_Function(rowIndex, ANV_string, originalString);
	userInput(rowIndex, ANV_string);
	
	display(rowIndex, columnIndex, originalString);
	
	fclose(fp);
	
	return 0;
	}

void copyFunction(FILE* fp, int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]){

	char *originalstring[ROWINDEX][COLUMNINDEX];

	for(int row = 0; row <= rowIndex; row++){
		for(int column = 0; column <= columnIndex; column++){
		fscanf(fp, "%c", originalstring[row][column]);
			}
		}
	}
	
void ANV_Function(int rowIndex, char ANV_string[ROWINDEX], char originalString[][COLUMNINDEX]){

	int a = 0;
	for(int i =0; i <= rowIndex; i++){
		if(i % 2 == 1){
			ANV_string[a] = originalString[i][0];
			a++;
		}
	}
}

void userInput(int rowIndex, char ANV_string[ROWINDEX]){
	
	int i;
	switch(ANV_string[i]){
		case 'N':
			printf("Enter a Noun:\n");
			scanf(" %s", &ANV_string[i]);
		break;
		case 'A':
			printf("Enter a Adjective:\n");
			scanf(" %s", &ANV_string[i]);
		break;
		case 'V':
			printf("Enter a Verb:\n");
			scanf(" %s", &ANV_string[i]);
		break;
		}
}
	
void display(int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]){
	for(int line = 0; line < rowIndex; line++){
		for(int value = 0; value < columnIndex; value++){
			printf("%s", originalString);
			}
		}
		printf("\n");
	}
