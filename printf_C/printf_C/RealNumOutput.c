#include <stdio.h>

int RealNum(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234); // e ǥ��� ����� ���
	printf("%f \n", 0.12345678); //1.0x10 �� 10�� 
	printf("%e \n", 0.12345678);  // e ǥ��� ����� ���
	return 0;
}     