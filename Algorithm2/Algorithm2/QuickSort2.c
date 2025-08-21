#include <stdio.h>
#include <stdlib.h>

/*
	�� ����
	- ���� ���� ������� �����ϴ� �ſ� ȿ������ ���� �˰���
	- ���� ����(�ǹ� ���� -> ���� -> ��� ȣ��)
	- �� �κФ� �迭�� ���̰� 1���ϰ� �Ǹ� ������ ����
*/

//�迭�� �� ��� ��ȯ
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//�迭(a)�� �ǹ�(pivot)�� �������� ����
void quickSorting(int a[], int left, int right) {
	int pl = left;            //���� Ŀ��(pivot left)
	int pr = right;        //������ Ŀ��(pivot right)
	int pivot = a[(pl + pr) / 2];  //�ǹ��� ��� ��� 

	//���� �ݺ�
	while (pl <= pr) {
		while (a[pl] < pivot)
			pl++;  //�ǹ����� ū �� ���� ������ �̵�
		while (a[pr] > pivot)
			pr--;  //�ǹ����� ���� �� ���� ������ �̵�
		if (pl <= pr) {
			//��ȯ 
			swap(&a[pl], &a[pr]); 
			pl++;
			pr--;
		}
	} //while ����

	//��� ȣ��
	if (left < pr)
		quickSorting(a, left, pr);  //�迭�� ���� �κ� ���ȣ��
	if (pl < right)
		quickSorting(a, pl, right); //�迭�� ������ �κ� ���ȣ�� 
}

int main()
{
	int size;
	int* arr;

	puts(">>> �� ���� >>>");
	printf("����� ���� : ");
	scanf_s("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

	//����� �Է�
	for (int i = 0; i < size; i++) {
		printf("arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	quickSorting(arr, 0, size - 1);  //���� �Լ� ȣ��

	puts("=== �� ���� �� ===");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	free(arr); //�޸� �ݳ�

	return 0;
}