#include <stdio.h>
/*
	�Ǻ���ġ ����
	1 1 2 3 5 8 13...
	��°�� = ù°��  + ��°��

	�޸������̼�(memorization) - �޸� ���
	- � ������ ���� �ش��� ������ �װ��� �޸��� �д�.
	��� ���⵵ - O(2^n) -> O(n)
*/

int memo[50] = { 0 };    //��� ��� ����

int fibo(int n) {
	if (memo[n] != 0)
		return memo[n];  //�̹� ��������� �ٷ� ��ȯ
	
	if (n <= 2)
		return memo[n] = 1;  //���� �� ��ȯ
	else
		return memo[n] = fibo(n - 2) + fibo(n - 1);
}

int main()
{
	puts("1�⵿���� �䳢�� ��ü �� ���");
	for (int i = 1; i <= 12; i++) {
		printf("%d ", fibo(i));
	}

	return 0;
}