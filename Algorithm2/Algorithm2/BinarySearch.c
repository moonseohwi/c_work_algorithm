#include <stdio.h>

int main()
{
	//���ĵ� �迭
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int low, high, mid;
	int x;  //ã�� ��

	low = 0;   //ù �ε���
	high = 8;  //������ �ε���
	x = 8;

	while (low <= high) {
		//�߰� �ε���
		mid = (low + high) / 2;
		printf("%d\n", mid);  // 4 -> 6 -> 7 -> ã��

		if (arr[mid] == x) {
			printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, mid);
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return 0;
}