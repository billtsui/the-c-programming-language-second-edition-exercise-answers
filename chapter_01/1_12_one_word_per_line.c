/********************************************************************************
* @File name: 1_11_one_word_per_line.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-09-04
* @Description: Write a program that prints its input one word per line.
* Need to consider multiple spaces and others.
********************************************************************************/

#define IN   1
#define OUT  0

#include <stdio.h>

int main(int argc, char *argv[]) {
	int c;
	int state = OUT;
	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\n'){
			putchar(c);
			state = IN;
		}else if(state == IN){
			putchar('\n');
			state = OUT;
		}
	}
	
	return 0;
}