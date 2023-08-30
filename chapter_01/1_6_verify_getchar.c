/********************************************************************************
* @File name: 1_6_verify_getchar.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-30
* @Description: Verify that the expression getchar() != EOF is 0 or 1.
* How to input EOF characters?For MacOS it is: Ctrl + D
********************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Verifying that the expression 'c = getchar() != EOF' is: %d \n", (getchar() != EOF));
	return 0;
}