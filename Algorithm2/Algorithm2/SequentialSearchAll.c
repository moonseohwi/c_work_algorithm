#include <stdio.h>
#include <stdlib.h>

/*
	�ߺ� �� ã��
*/

int seqSearchAll(int a[], int n, int x, int idxs[]) {
	int i, count = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			idxs[count++] = i;  
			/*
				idxs[0] = 5
				idxs[1] = 8
			*/
		}
	}
	return count;  //ã�� ���� ��ȯ
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1 ,3 ,6 };  //6�� �� �� ����
	int size, i;
	int x = 6;   //ã�� ��
	int* idxs;   //ã�� �ε��� ������ �迭(���� �Ҵ�)
	int count;   //�˻����� ����

	size = sizeof(a) / sizeof(a[0]);
	idxs = (int*)malloc(sizeof(int) * size);

	count = seqSearchAll(a, size, x, idxs);  //���� ž�� �Լ� ȣ��
	if (count == 0) {
		puts("�˻��� �����߽��ϴ�.");
	}
	else {
		printf("%d��(��) �� %d�� �߰ߵǾ����ϴ�.\n", x, count);
		printf("��ġ : ");
		for (i = 0; i < count; i++) {
			printf("a[%d] ", idxs[i]);
		}
	}
	
	free(idxs);

	return 0;
}