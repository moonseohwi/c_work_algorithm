#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ִ밪 ���ϴ� �Լ�
int findMax(int a[], int len) {
	int max = a[0];  //�迭�� ù ��� - �ִ밪 ����
	for (int i = 0; i < len; i++) {
		if (a[i] > max)   //max�� arr�� ��� ���� �� 
			max = a[i];   //�ִ밪 ����
	}
	return max;
}

int main()
{
	//����� Ű�� �Է¹޾� �ִ밪 ���ϱ�
	int number;   //��� �� 
	int* height;  //���� �Ҵ�
	int i;        //�ݺ� ���� 

	printf("��� �� �Է� : ");
	scanf("%d", &number);
	height = (int*)malloc(sizeof(int) * number);
	if (height == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
		return 1;
	}

	printf("%d���� Ű�� �Է��ϼ���.\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}

	printf("�ִ밪�� %d�Դϴ�.\n", findMax(height, number));

	free(height);  //�޸� ����

	/*
	//���� �Ҵ�
	int arr[] = { 2, 5, 1, 4, 3 };
	int size, max;

	size = sizeof(arr) / sizeof(arr[0]); //20(4*5) / 4 = 5  
	max = findMax(arr, size);

	printf("�ִ밪 : %d\n", max);
	*/

	return 0;
}