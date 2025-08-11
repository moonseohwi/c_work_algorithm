#include <stdio.h>

int main()
{
	//두 수 중에서 큰 값 계산
	int x = 10, y = 20;
	int result;  //더 큰 값 저장

	result = (x > y) ? x : y;
	printf("두 수중 더 큰 수 : %d\n", result);  //20

	//세개의 수중에서 최대값 찾기
	int a = 10, b = 20, c = 30;
	int max;

	//첫째수를 최대값으로 지정
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("최대값은 %d입니다. \n", max);

	return 0;
}