#include <stdio.h>
/*
	���� ����(Bubble Sorting)
	- �迭���� ������ �� ���� ��Ҹ� ���Ͽ� �ڸ��� �ٲٴ� ���
	- ����� ������ n���� �迭���� n-1ȸ ���ϰ� ��ȯ��
*/

void bubbleSorting(int a[], int n) {
	int i, j, temp;

	//�񱳿� ��ȯ �ݺ�
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {       //���� ��� ���ϰ� 
			if (a[j] > a[j + 1]) {  //�� ��Ұ� �� ��Һ��� ũ��
				temp = a[j];			//�ڸ� �ٲ��� �Ͼ - �������� ����
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 41, 8, 36, 77, 15, 85 };
	int i;
	int size;  //�迭�� ũ��

	size = sizeof(arr) / sizeof(arr[0]);

	//���� ���� �Լ� ȣ��
	bubbleSorting(arr, size);

	//���
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);  //8 15 36 41 77
	}

	return 0;
}