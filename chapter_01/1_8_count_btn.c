/********************************************************************************
* @File name: 1_8_count_btn.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-31
* @Description: Write a program to count blanks, tabs, and newlines.
********************************************************************************/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int blank,tab,newline;
	
	blank = 0;
	tab = 0;
	newline = 0;
	int c = 0;
	
	while ((c = getchar()) != EOF) {
		if(c == '\t'){
			tab++;
		}
		
		if(c == ' '){
			blank++;
		}
		
		if(c == '\n'){
			newline++;
		}
	}
	
	printf("number of blanks:%d\nnumber of tabs:%d\nnumber of newlines:%d\n",blank,tab,newline);
	return 0;
}