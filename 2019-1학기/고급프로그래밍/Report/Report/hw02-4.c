#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hw02_4() {
	int sum;
	// (1)
	sum = 0;
	for (int n = 1; n <= 100; n++)
		for (int i = 1; i <= n; i++)
			sum += i;
	printf("1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...+98+99+100) = %d\n", sum);
	// (2)
	sum = 0;
	for (int n = 1; n <= 97; n+=4)
		for (int i = 1; i <= n; i+=2)
			sum += i;
	printf("1+(1+3+5)+(1+3+5+7+9)+(1+3+5+7+9+11+13)+...+(1+3+5+7+...+97) = %d\n", sum);
	// (3)
	sum = 0;
	for (int n = 1; n <= 100; n+=4)
		for (int i = 2; i <= n; i += 2)
			sum += i;
	printf("(2+4)+(2+4+6+8)+(2+4+6+8+10+12)+...+(2+4+6+8+10+12+...+100) = %d\n", sum);
}