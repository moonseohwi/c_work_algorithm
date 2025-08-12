#include <stdio.h>
#include <stdbool.h>  // true / false������ ��� ����
/*
	- �ִ�����(Greatest Common Divisor) ���ϱ�
		** ��� ���� ** 
		1. �� ���� �� ���� ���� i�� �����Ѵ�.
		2. i�� �� ���� ����� ������� Ȯ���Ѵ�.
		3. ����� ����̸� �� ���� ��������� �����ְ� �����Ѵ�.
		4. ����� ����� �ƴϸ� i�� 1��ŭ ���ҽ�Ű��, 2������ ���ư� �ݺ��Ѵ�.
*/

//min(�ּҰ�) ���� 
int min(int x, int y) {
	return (x < y) ? x : y;
}

//gcd ���� 
int gcd(int a, int b) {  //a=4, b=6
	int i;   //�� ���� �� ���� �� ����
	i = min(a, b);

	while (1) {
		if (a % i == 0 && b % i == 0)
			return i;
		i--;  //i�� 1���� ��Ŵ
	}
}
/*
	a = 4, b = 6 
	i = 4
	4 % 4 == 0 && 6 % 4 == 0, false
	i = 3
	4 % 3 == 0 && 6 % 3 == 0, false
	i = 2 (�ִ� �����)
	4 % 2 == 0 && 6 % 2 == 0, true
*/

int main()
{
	printf("%d\n", gcd(4, 6));    //2   <-4�� 6�� �ִ� �����
	printf("%d\n", gcd(1, 5));    //1
	printf("%d\n", gcd(24, 60));  //12

	return 0;
}