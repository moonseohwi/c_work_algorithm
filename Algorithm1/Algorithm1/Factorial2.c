#include <stdio.h>
/*
	<재귀 알고리즘>
	곱셈 알고리즘 -> 펙토리알(Factorial)
	1부터 5까지 곱하기
	1 x 2 x 3 x 4 x 5 -> 5!

	계산 복잡도
	- 곱셈 알고리즘 : n번 곱하기 - O(n)
	- 재귀 알고리즘 : 펙토리알
*/
int gobN(int n) {
	int num = 1;  //곱한 결과 값
	int i;        //반복 변수
	for (i = 1; i <= n; i++) {
		num *= i;  //num = num * i;
	}
	return num;
}

int factorial(int n) {
	if (n <= 0)
		return 1;
	else
		return n * factorial(n - 1);
}

/* 
		 n! = n x (n - 1)!
		 ...
		 5! = 5x4! = 5x(5-1)! = 120
		 4! = 4x3! = 4x(4-1)! = 24
		 3! = 3x2! = 3x(3-1)! = 6
		 2! = 2x1! = 2x(2-1)! = 2
		 1! = 1
	n=0 0! = 1 (종료 조건)
*/

int main()
{
	int value1;

	value1 = gobN(5);
	printf("결과값 : %d\n", value1);

	int a, b, c;

	a = factorial(1);
	b = factorial(3);
	c = factorial(5);

	printf("1! = %d, 3! = %d, 5! = %d\n", a, b, c);

	return 0;
}