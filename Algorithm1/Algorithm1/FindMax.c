#include <stdio.h>

int main()
{
	//�� �� �߿��� ū �� ���
	int x = 10, y = 20;
	int result;  //�� ū �� ����

	result = (x > y) ? x : y;
	printf("�� ���� �� ū �� : %d\n", result);  //20

	//������ ���߿��� �ִ밪 ã��
	int a = 10, b = 20, c = 30;
	int max;

	//ù°���� �ִ밪���� ����
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	printf("�ִ밪�� %d�Դϴ�. \n", max);

	return 0;
}