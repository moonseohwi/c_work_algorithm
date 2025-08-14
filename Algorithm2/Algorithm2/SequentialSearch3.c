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

int seqSearch(int a[], int n, int x) {
	int i = 0;
	while (1) {
		if (i == n)    //ex) n = 9 <���� ��>
			return -1; //�˻� ����
		if (a[i] == x)
			return i;  //�˻� ����
		i++;
	}
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;
	int x = 6;    //ã�� ��
	int idx;      //�迭�� �ε���

	size = sizeof(a) / sizeof(a[0]);

	idx = seqSearch(a, size, x);  //���� ž�� �Լ� ȣ��

	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, idx);

	return 0;
}