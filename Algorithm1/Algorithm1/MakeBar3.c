#include <stdio.h>
#include <stdlib.h>  //malloc(), free()

/*
	- ���(��, ��, 2����)�� ���� �׷��� �׸���
	- ��ø for��
	- ���� �޸� �Ҵ� - heap(��) ������ ���
*/

int main()
{
	//�迭�� ���� �Ҵ�
	int* arr = NULL;  //������(���� �迭)
	int size;  //�迭�� ũ��
	int i, j;

	//�迭�� ũ�� �Է�
	printf("�迭�� ũ�� �Է� : ");
	scanf_s("%d", &size);

	//���� �޸� �Ҵ�
	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�.\n");
		return 1;
	}

	//����� �Է�
	for (i = 0; i < size; i++) {
		printf("arr[%d] �Է� : ", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n");

	//���� �׷��� ���
	for (i = 0; i < size; i++) {  //�� 4 
		printf("arr[%d] = %d |", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) {  //���� ���ᰪ ��ȭ
			printf("*");
		}
		printf("\n");
	}

	free(arr);  //�޸� ����

	return 0;
}