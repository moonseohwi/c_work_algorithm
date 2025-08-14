#include <stdio.h>
/*
	���� ����
	- ������ ��Ҹ� �׺��� �� ������ �˸��� ��ġ�� �����ϴ�
	  �۾��� �ݺ��Ͽ� �����ϴ� �˰����̴�.
*/

void insertSorting(int a[], int n) {
	int i, j, tmp;

	//���� ����
	//���� - i = 1���� ����, 0�� ���ĵ� ������ ������
	for (i = 1; i < 5; i++) {
		tmp = a[i];  //������ ��� ����
		for (j = i; j > 0 && a[j - 1] > tmp; j--) {
			a[j] = a[j - 1];  //���� �ε����� ���� �ε����� ���� (�� ĭ �ڷ� �б�)
		}
		a[j] = tmp;  //tmp�� ���ڸ� ����
	}
}

int main()
{
	int arr[5] = { 41, 36, 8, 77, 15 };
	int i;
	int size; //�迭�� ũ��

	size = sizeof(arr) / sizeof(arr[0]);

	insertSorting(arr, size); //���� ���� �Լ� ȣ��

	

	//���� �� ���
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);  //8 15 36 41 77
	}

	return 0;
}