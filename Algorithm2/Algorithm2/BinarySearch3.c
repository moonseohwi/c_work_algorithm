#include <stdio.h>

int binarySearch(int a[], int n, int x) {
	int low, high, mid;
	low = 0;   //ù �ε���
	high = n - 1;  //������ �ε���

	while (low <= high) {
		//�߰� �ε���
		mid = (low + high) / 2;

		if (a[mid] == x) {
			return mid;  //ã�� ��ġ ��ȯ
		}
		else if (a[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	//ã�� ����
	return -1;
}

int main()
{
	//���ĵ� �迭
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 7;  //ã�� ��
	int size = sizeof(arr) / sizeof(arr[0]);
	int idx;    //ã�� ��ġ

	idx = binarySearch(arr, size, x);
	
	if (idx == -1) {
		printf("%d��(��) �����ϴ�.\n", x);
	}
	else {
		printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, idx);
	}

	return 0;
}