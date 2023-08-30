/********************************************************************************
* @File name: 1_4_celsius2fahr.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-30
* @Description: Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
********************************************************************************/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int fahr,celsius;
	int lower,upper,step;
	
	lower = -20;
	upper = 40;
	step = 5;
	celsius = lower;
	
	printf("Celsius\t\tFahrenheit\n");
	
	while(celsius <= upper){
		fahr = celsius * 9 / 5 + 32;
		printf("\t%d\t\t\t%d\n",celsius,fahr);
		celsius += step;
	}
}