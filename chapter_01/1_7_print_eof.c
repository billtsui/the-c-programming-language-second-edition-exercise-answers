/********************************************************************************
* @File name: 1_7_print_eof.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-31
* @Description: Write a program to print the value of EOF.
* How to input EOF characters?For MacOS it is: Ctrl + D
* On MacOS,the value of EOF is '-1'.
********************************************************************************/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int c = getchar();
	printf("%d",c);
	return 0;
}