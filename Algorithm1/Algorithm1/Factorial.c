#include <stdio.h>
/*
	<재귀 알고리즘>
	곱셈 알고리즘 -> 펙토리알(Factorial)
	1부터 5까지 곱하기 
	1 x 2 x 3 x 4 x 5 -> 5!

	계산 복잡도
	- 곱셈 알고리즘 : n번 곱하기 - O(n)
*/
int gobN(int n) {
	int num = 1;  //곱한 결과 값
	int i;        //반복 변수
	for (i = 1; i <= n; i++) {
		num *= i;  //num = num * i;
	}
	return num;
}

int main()
{
	int value1;

	value1 = gobN(5);
	printf("결과값 : %d\n", value1);

	return 0;
}