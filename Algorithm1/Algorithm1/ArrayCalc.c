#include <stdio.h>

//�迭�� �̿��� ��� ���

int main()
{
	int a[] = { 70, 80, 65, 90 };
	int i, sum = 0;

	//�ܼ� ���
	printf("��� :%.1f\n", (a[0] + a[1] + a[2] + a[3]) / 4.0);  //76.2

	//�ݺ��� ���
	for (i = 0; i < 4; i++) {
		sum += a[i];
	}

	printf("��� :%.1f\n", sum / 4.0);

	return 0;
}