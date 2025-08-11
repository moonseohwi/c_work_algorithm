#include <stdio.h>
/*
	<��� �˰���>
	���� �˰��� -> ���丮��(Factorial)
	1���� 5���� ���ϱ�
	1 x 2 x 3 x 4 x 5 -> 5!

	��� ���⵵
	- ���� �˰��� : n�� ���ϱ� - O(n)
	- ��� �˰��� : ���丮��
*/
int gobN(int n) {
	int num = 1;  //���� ��� ��
	int i;        //�ݺ� ����
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
	n=0 0! = 1 (���� ����)
*/

int main()
{
	int value1;

	value1 = gobN(5);
	printf("����� : %d\n", value1);

	int a, b, c;

	a = factorial(1);
	b = factorial(3);
	c = factorial(5);

	printf("1! = %d, 3! = %d, 5! = %d\n", a, b, c);

	return 0;
}