#include <stdio.h>

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
void partition(int a[], int n) {
	int pl = 0;            //���� Ŀ��(pivot left)
	int pr = n - 1;        //������ Ŀ��(pivot right)
	int pivot = a[n / 2];  //�ǹ��� ��� ��� 
	int temp;              //��ȯ�� ���� �ӽú���

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

	//�ǹ�, �ǹ� ������ �׷�, �ǹ� �̻��� �׷� ���
	printf("�ǹ�(pivot)�� ���� %d�Դϴ�.\n", pivot);
	printf("�ǹ�(pivot) ������ �׷�\n");
	for (int i = 0; i <= pl - 1; i++)
		printf("%d ", a[i]);
	putchar('\n');

	printf("�ǹ�(pivot) �̻��� �׷�\n");
	for (int i = pr + 1; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');
}

int main()
{
	int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);

	partition(arr, size);  //���� �Լ� ȣ��

	return 0;
}