/********************************************************************************
* @File name: 1_5_print_fahr2celsius_desc.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-28
* @Description: Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 
* 300 degrees to 0.
********************************************************************************/

#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define SETP	20

int main(int argc, char *argv[]) {
	int fahr;
	/* lower limit of temperature scale */
	/* upper limit */
	/* step size */
	fahr = UPPER;
	printf("Fahrenheit\t\tCelsius\n");
	while (fahr >= LOWER) {
		printf("\t%3d \t\t%6.1f\n", fahr, 5.0/9.0 * (fahr-32));
		fahr = fahr - SETP;
	}
}