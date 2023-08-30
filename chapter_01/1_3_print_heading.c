/********************************************************************************
* @File name: 1_3_print_heading.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-28
* @Description: Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
********************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	/* lower limit of temperature scale */
	/* upper limit */
	/* step size */
	fahr = lower;
	printf("Fahrenheit\t\tCelsius\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("\t%d\t\t\t  %d\n", fahr, celsius);
		fahr = fahr + step;
	}
}