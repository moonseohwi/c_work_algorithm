#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  //malloc(), free(), srand(), rand()
#include <time.h>    //time()

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

	//������ ������ �õ尪 ���� - �ִ밪�� ��� ����
	srand(time(NULL));

	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 91;  //100 ~ 190������ ���� ����
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("�ִ밪�� %d�Դϴ�.\n", findMax(height, number));

	free(height);  //�޸� ����

	return 0;
}