#include <stdio.h>

//ã������ �ϴ� ���� ã���� �� (����)
int main()
{
	int a[] = { 9, 8, 7, 6, 7 };
	int i;
	int x = 7;  //ã�� ��
	int count = 0;

	//7�� �� ������ ����
	for (i = 0; i < 5; i++) {
		if (a[i] == x) {
			printf("%d �߰�!\n", x);
			count++;
		}
	}

	printf("%d��(��) %d�� �߰�!" , x, count);

	return 0;
}