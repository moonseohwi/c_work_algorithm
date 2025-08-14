#include <stdio.h>

/*
	 �����˻�(Sequential Search)
	  - ���ۿ���
		1. �迭�� ù��° ��Һ��� �ϳ��� �˻�
		2. ã�� ���� ������ ��ġ ���
		3. ã������ ����
		4. ������ ��ã���� �������� ���
	  - Ư¡
		1. ������ �ſ� �����ϴ�.
		2. �����Ͱ� �������� �ӵ��� ��������. ?�ð� ���⵵ O(n)
		3. ���ʿ��� ��?���� ã�Ҿ �ݺ����� ������ ��
*/

void sequentialSearch(int a[], int n, int x) {
	int i, found = 0;

	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, i);
			found = 1;
			break;
		}
	}

	if (!found)
		printf("%d��(��) �����ϴ�.\n", x);
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;
	int x = 6;      //ã�� ��

	size = sizeof(a) / sizeof(a[0]);

	sequentialSearch(a, size, x);

	return 0;
}