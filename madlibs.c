//Author: Rhode Aly Benjamin, Perry, Daniel
//Date: 12/10/2024
//Final Project

#include <stdio.h>
#define FILE1 "madlib1.txt"
#define STR_CAP 100

void input(FILE* fp, char adjective[], char noun[], char verb[]);
void display(char adjective[], char noun[], char verb[]);
 
int main(){
	
	char adjective[STR_CAP], noun[STR_CAP], verb[STR_CAP];
	
	FILE *fp;
	fp = fopen(FILE1, "w");
	if(fp == NULL){
		printf("can't open file\n");
		return 0;
	}
	input(fp, adjective, noun, verb);
	display(adjective, noun, verb);
	
	fclose(fp);
	
	return 0;
	}

void input(FILE* fp, char adjective[], char noun[], char verb[]){

	}
