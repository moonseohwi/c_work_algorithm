#include <stdio.h>
/*
	<��� �˰���>
	���� �˰��� -> ���丮��(Factorial)
	1���� 5���� ���ϱ� 
	1 x 2 x 3 x 4 x 5 -> 5!

	��� ���⵵
	- ���� �˰��� : n�� ���ϱ� - O(n)
*/
int gobN(int n) {
	int num = 1;  //���� ��� ��
	int i;        //�ݺ� ����
	for (i = 1; i <= n; i++) {
		num *= i;  //num = num * i;
	}
	return num;
}

int main()
{
	int value1;

	value1 = gobN(5);
	printf("����� : %d\n", value1);

	return 0;
}