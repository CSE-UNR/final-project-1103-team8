//Couldn't work
#include <stdio.h>

void InputFunction(int rowIndex, int columnIndex, char sheet[][columnIndex]){
	for(int row = 0; row <= rowIndex; row++){
		for(int column = 0; column <= columnIndex; column++){
		// need to know how much word of each types
			if(row = 0){
				printf("Enter a Adjective:\n");
				scanf(" %c", &sheet[row][column]);
				}
			if(row = 1){
				printf("Enter a Noun:\n");
				scanf(" %c", &sheet[row][column]);
				}
			if(row = 2){
				printf("Enter a Verb:\n");
				scanf(" %c", &sheet[row][column]);
				}
				}
		printf("\n");
		}
		}
				
