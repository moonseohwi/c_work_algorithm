#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
 	int data;           //��尡 �����ϴ� ��
	struct Node* next;  //����� ���� �ּ�(�ڱ� ����) 
}Node;

//���� ����
Node* head = NULL;  //����Ʈ�� ���� ���

//�Լ��� ���� ����
void insertNodeEnd(int value); //�� �� ����
void printList();              //�� �� ����
void deletsNode(value);        //��� ����
void insertNodeFront(value);   //����Ʈ ���
void freeList();               //�޸� ����

int main()
{
	bool run = true;
	int choice;  //���� �޴�
	int value;   //�Է��� ��

	while (run) {
		printf("\n=== ���� ����Ʈ �޴� ===\n");
		printf("1. �� �ڿ� ��� ���� \n");
		printf("2. �� �տ� ��� ���� \n");
		printf("3. ��� ���� \n");
		printf("4. ����Ʈ ��� \n");
		printf("5. ���� \n");
		printf("�޴� ���� : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("������ �� �Է� : ");
			scanf("%d", &value);
			insertNodeEnd(value);
			break;
		case 2:
			printf("������ �� �Է� : ");
			scanf("%d", &value);
			insertNodeFront(value);
			break;
		case 3:
			printf("������ �� �Է� : ");
			scanf("%d", &value);
			deletsNode(value);
			break;
		case 4:
			printList();
			break;
		case 5:
			freeList(value);
			puts("���α׷� ����");
			run = false;
			break;
		default: 
			puts("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.");
		}
	}

	return 0;
}

//main() �ݱ�
void insertNodeEnd(int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) {
		puts("�޸� �Ҵ� ����\n");
		return;
	}

	newNode->data = value;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;  //���� ���� �̵�
		}
		current->next = newNode;
	}
	printf("%d �� �� ���� �Ϸ�\n", value);
}

void printList() {
	if (head == NULL) {
		puts("����Ʈ�� ��� �ֽ��ϴ�.\n");
		return;
	}

	Node* current = head;
	printf("����Ʈ : ");
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	puts("NULL");
}

void insertNodeFront(value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) {
		puts("�޸� �Ҵ� ����");
		return;
	}

	newNode->data = value;
	newNode->next = head;
	head = newNode;
	printf("%d �� �� ���� �Ϸ�\n", value);
}

void freeList() {
	Node* current = head;
	while (current != NULL) {
		Node* temp = current;  //���� ��带 �ӽ� ��忡 ����
		current = current->next;
		free(temp);
	}
	head = NULL;
}

void deletsNode(value) {
	Node* current = head;
	Node* prev = NULL;

	//��� ž�� - ���� ��� ã�� ��
	while (current != NULL && current->data != value) {
		prev = current;           //prev ��� �̵�
		current = current->next;  //current ��� �̵� 
	}

	if (current == NULL) {
		printf("%d ���� ����Ʈ�� �����ϴ�.\n", value);
		return;
	}
	
	//��� ����
	if (prev == NULL) {        //ù ��� ����
		head = current->next;  //���� ��尡 head�� ��
	}
	else {                           //���� ��� ����
		prev->next = current->next;  //���� ��尡 ���� ����� ���� ��尡 ����
	}

	free(current); //���� ���(���� ���)�� �޸� ����
	printf("%d ���� �Ϸ�\n", value);
}