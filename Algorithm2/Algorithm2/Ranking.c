#include <stdio.h>
#include <stdlib.h>
/*
	���� ���ϱ� 
	- �迭�� �� ��Ұ� ��� ��ҿ� ����
	- rank �迭�� 1�� �ʱ�ȭ��
	- � ��Ұ� �ڱ⺸�� ũ�� rank ��Ҹ� 1 ���� ��Ų��.
*/

int main()
{
	int arr[] = { 41, 8, 36, 77, 15 };
	//int rank[5];
	int size = sizeof(arr) / sizeof(arr[0]);
	int* rank;  //�����͸� ����� ���� �Ҵ�
	int i, j;

	rank = (int*)malloc(sizeof(int) * size);

	//�� �� ���� ����
	for (i = 0; i < size; i++) {
		rank[i] = 1;
		for (j = 0; j < size; j++) {
			if (arr[i] < arr[j])
				rank[i]++;  //rank[i] = rank[i] + 1;
		}
	}

	//���� ���
	for (i = 0; i < size; i++) {
		printf("%d ", rank[i]);  // { 2, 5, 3, 1, 4 }
	}

	free(rank);

	return 0;
}