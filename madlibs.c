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
void wordReplace(int rowIndex, char originalString[][COLUMNINDEX], char ANV_string[ROWINDEX]);
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
	wordReplace(rowIndex, originalString, ANV_string);
	display(rowIndex, columnIndex, originalString);
	
	fclose(fp);
	
	return 0;
	}

void copyFunction(FILE* fp, int rowIndex, int columnIndex, char originalString[][COLUMNINDEX]){

	//while loop 
	//you might want to return the number of rows in the file
	for(int row = 0; row <= rowIndex; row++){
		for(int column = 0; column <= columnIndex; column++){
		fgets(fp, "%c", originalString[row][column]);
			}
		}
	}
	
void ANV_Function(int rowIndex, char ANV_string[ROWINDEX], char originalString[][COLUMNINDEX]){

	int a = 0;
	for(int i =0; i <= rowIndex; i++){
	//update this if condition
		if(i % 2 == 1){
			ANV_string[a] = originalString[i][0];
			a++;
		}
	}
}

void userInput(int rowIndex, char ANV_string[ROWINDEX]){
	
	int i;
	//add loop
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
void wordReplace(int rowIndex, char originalString[][COLUMNINDEX], char ANV_string[ROWINDEX])
{
	for (int row = 0; row <= rowIndex; row++)
	{
		int a = 0;
		for(int i = 0; i <= rowIndex; i++)
		{
			//change if condition
			if(i % 2 == 1)
			{
			originalString[i][0] = ANV_string[a];
			a++;
			}
		}
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
