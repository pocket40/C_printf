#include <stdio.h>

int OctHex(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1); //%o ��ȣ���� 8����
	printf("%x %#x \n", num2, num2); //%x ��ȣ���� 16����
	return 0;
}