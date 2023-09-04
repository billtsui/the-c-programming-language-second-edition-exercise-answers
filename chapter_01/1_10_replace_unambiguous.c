/********************************************************************************
* @File name: 1_10_replace_unambiguous.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-09-04
* @Description: Write a program to copy its input to its output,replacing each tab by \t
* each backspace by \b,and each backslash by \\.This makes tabs and backspaces visible in an umanbiguous way.
********************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int c;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			printf("%s","\\t");
			continue;
		}
		
		if(c == '\b'){
			printf("%s","\\b");
			continue;
		}
		
		if(c == '\\'){
			printf("%s","\\\\");
			continue;
		}
		
		putchar(c);
	}
	return 0;
}