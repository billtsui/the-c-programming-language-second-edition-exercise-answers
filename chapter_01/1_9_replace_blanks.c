/********************************************************************************
* @File name: 1_9_replace_blanks.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-31
* @Description: Write a program to copy its input to its output, replacing each string of one or
* more blanks by a single blank.
********************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ');
			putchar(' ');
			if(c == EOF) break;
		}
		
		if(c != ' '){
			putchar(c);
		}
	}
	return 0;
}