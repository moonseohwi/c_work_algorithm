#include <stdio.h>

int main()
{
	//���ĵ� �迭
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int low, high, mid;
	int x;      //ã�� ��
	int found;  //����(ã��/������)

	low = 0;   //ù �ε���
	high = 8;  //������ �ε���
	x = 10;    //ã�� ��
	found = 0;
	
	while (low <= high) {
		//�߰� �ε���
		mid = (low + high) / 2;

		if (arr[mid] == x) {
			printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, mid);
			found = 1;  //ã��
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	if (!found)  //ã�� ����
		printf("%d��(��) �����ϴ�.\n", x);

	return 0;
}