#include <stdio.h>

int max3(int a, int b, int c) {
	int max = a;  //�ִ밪 ����
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;  //�ִ밪 ��� ��ȯ
}

int main()
{
	//�� �� �߿��� ū �� ���
	int x = 10, y = 20;
	int result;  //�� ū �� ����

	result = (x > y) ? x : y;
	printf("�� ���� �� ū �� : %d\n", result);  //20

	//������ ���߿��� �ִ밪 ã��
	
	printf("max3(%d, %d, %d)�߿� ���� ū ���� = %d\n", 20 , 10, 30, max3(20, 10, 30));
	printf("max3(%d, %d, %d)�߿� ���� ū ���� = %d\n", 20 , 30, 10, max3(20, 10, 30));


	return 0;
}