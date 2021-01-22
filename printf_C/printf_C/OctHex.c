#include <stdio.h>

int OctHex(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1); //%o 부호없는 8진수
	printf("%x %#x \n", num2, num2); //%x 부호없는 16진수
	return 0;
}