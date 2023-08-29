/********************************************************************************
* @File name: 1_2_hello_world.c
* @Author: Bill Tsui
* @Version: 1.0
* @Date: 2023-08-28
* @Description: Exercise 1-2. Experiment to find out what happens when prints's argument
* string contains \c, where c is some character not listed above.
* @Answer: The "\c" is not an escape character.There is a warning when compiling.
* "Unknown escape sequence '\c'".It still prints the character "c".
********************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello World!\n");
    printf("\c");
    return 0;
}