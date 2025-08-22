#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	���� �޸� ����� ���� ����Ʈ - ����� �Է�
*/

typedef struct {
	int data;           //��尡 �����ϴ� ��
	struct Node* next;  //���� ����� �ּ�
}Node;

int main()
{
	int num;               //����� ����
	int value;             //����� ������ 
	Node* head = NULL;     //head ��� �ʱ�ȭ
	Node* current = NULL;  //���� ���
	Node* newNode = NULL;  //�� ���

	printf("��� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	//�Է��� ������ŭ ��� ���� �� ���� �ݺ�
	for (int i = 0; i < num; i++) {
		newNode = (Node*)malloc(sizeof(Node));

		printf("%d��° ��� �� �Է� : ", i + 1);
		scanf("%d", &value);

		//1. ��� ���� ��� - �� �տ��� ����
		/*
		newNode->data = value;
		newNode->next = head;  //�� ��尡 head�� �����
		head = newNode;        //�� ��尡 head�� ��
		*/

		//2. ��� ���� ��� - �� �ڿ� ����
		newNode->data = value;
		newNode->next = NULL;

		if (head == NULL) {
			head = newNode;     //�� ��尡 head�� ��
			current = newNode;  //�� ��尡 ���� ��尡 ��
		}
		else {
			current->next = newNode;  //�� ��尡 ����(����) ���� �����
			current = newNode;        //�� ��尡 ���� ��尡 ��
		}
	}

	puts("���Ḯ��Ʈ ���");
	current = head;
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	puts("NULL");

	//�޸� ����
	current = head;
	while (current != NULL) {
		Node* temp = current;  //���� ��带 ����
		printf("free(%d)\n", current->data);
		current = current->next;  //���� ��带 ���� ���� �̵�
		free(temp);
	}

	return 0;
}