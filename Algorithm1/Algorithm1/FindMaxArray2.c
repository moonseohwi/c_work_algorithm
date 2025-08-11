#include <stdio.h>

//�ִ밪 ���ϴ� �Լ�
int findMax(int a[], int len) {
	int max = a[0];

	for (int i = 0; i < len; i++) {
		if (a[i] > max)   //max�� arr�� ��� ���� �� 
			max = a[i];   //�ִ밪 ����
	}
	return max;
}

//�ִ밪�� ��ġ ���ϴ� �Լ�
int findMaxIdx(int a[], int len) {
	int maxIdx = 0;  //�迭�� ù ��ġ�� �ִ밪���� ����
	for (int i = 0; i < len; i++) {
		if (a[i] > a[maxIdx])
			maxIdx = i;  //�ε��� ��ġ ����
	}
	return maxIdx;
}

int main()
{
	int arr[] = { 53, 11, 65, 36, 29, 89};
	int size, max, maxIdx;

	size = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", size);  //  20/4 = 5

	//�ִ밪 �Լ� ȣ��
	max = findMax(arr, size);
	
	printf("�ִ밪 : %d\n", max);  //89

	//�ִ밪�� ��ġ �Լ� ȣ��
	maxIdx = findMaxIdx(arr, size);

	printf("�ִ밪�� ��ġ : %d\n", maxIdx);  //5

	return 0;
}