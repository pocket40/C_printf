#include <stdio.h>

int usingPG(void)
{
	double d1 = 1.23e-3; // 0.00123
	double d2 = 1.23e-4; // 0.000123
	double d3 = 1.23e-5; // 0.0000123
	double d4 = 1.23e-6; // 0.00000123
	
	printf("%G \n", d1);
	printf("%G \n", d2);
	printf("%G \n", d3);
	printf("%G \n", d4);
	return 0;
	//%g는 소수점 이하의 자릿수가 늘어나면 e표기법으로 출력을 한다.
}