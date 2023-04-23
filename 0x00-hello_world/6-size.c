#include<stdio.h>
/**
 * main - a C-Program that prints size of varios types on the computer
 * Return:0
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
