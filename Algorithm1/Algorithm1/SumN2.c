#include <stdio.h>
/*
	- �ð� ���⵵(��� - Big O) 
	1���� 10������ �հ�
	- ��� 1: n�� ���� - O(n)
	- ��� 2: ����1, ����1, ������1 - O(1)
*/

//���� �˰���1
int sumN(int n) {

	int i, sum = 0;

	for (i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

//���� �˰���2
int sumN2(int n) {
	int sum = 0;
	sum = (n * (n + 1)) / 2;
	return sum;
}

int main()
{
	int value1, value2;
	
	//sumN() ȣ��
	value1 = sumN(10);

	//sumN2() ȣ��
	value2 = sumN2(10);

	printf("�հ�1 : %d\n", value1);  //55
	printf("�հ�2 : %d\n", value2);  //55

	return 0;
}