#include <stdio.h>

int RealNum(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234); // e 표기법 기반의 출력
	printf("%f \n", 0.12345678); //1.0x10 에 10승 
	printf("%e \n", 0.12345678);  // e 표기법 기반의 출력
	return 0;
}     