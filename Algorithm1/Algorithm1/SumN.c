#include <stdio.h>

int main()
{
	//1부터 10까지의 합
	int i, sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("합계 : %d\n", sum);

	return 0;
}