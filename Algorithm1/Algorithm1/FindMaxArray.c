#include <stdio.h>

int main()
{
	int arr[] = { 53, 11, 65, 36, 29 };
	int i, max;

	//�迭�� ù��° ���� �ִ밪���� ����
	max = arr[0];

	for (i = 0; i < 5; i++) {
		if (arr[i] > max)   //max�� arr�� ��� ���� �� 
			max = arr[i];   //�ִ밪 ����
	}

	printf("�ִ밪 : %d\n", max);  //65

	return 0;
}