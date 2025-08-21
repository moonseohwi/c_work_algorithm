#include <stdio.h>
#include <stdlib.h>

/*
	���� �޸� ����� ���Ḯ��Ʈ - �Լ��� ����
*/

typedef struct {
	int data;           //��尡 �����ϴ� ��
	struct Node* next;  //���� ����� �ּ�
}Node;

//��� ���� �Լ�
Node* createNode(int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		puts("�޸� �Ҵ� ����!");
		exit(1);
	}

	newNode->data = value; //������ �� ����
	newNode->next = NULL;  //�ּ� �ʱ�ȭ
	return newNode;        //�� ��� ��ȯ
}

//����� ���� ī��Ʈ �Լ� ����
int getLength(Node* head) {
	int count = 0;
	Node* current = head;
	while (current != NULL) {
		count++;
		current = current->next;  //���� ��带 ���� ���� �̵�
	}
	return count;
}

//��� ��� �Լ� ����
void printList(Node* head) {
	Node* current = head;
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	puts("NULL");
}

int main()
{
	//��� 3��(���� �Ҵ�) ����
	Node* head = createNode(10);
	Node* second = createNode(20);
	Node* third = createNode(30);

	//��� ��ũ
	head->next = second;
	second->next = third;

	//����� ����
	printf("����� ���� : %d\n", getLength(head));

	//���
	puts("���� ����Ʈ ���");
	printList(head);  //head ��� �Է�

	//�޸� ����(ť ���)
	Node* current = head;
	while (current != NULL) {
		Node* temp = current;  //���� ��� ����(���� ��� : head)
		printf("free(%d)\n", current->data);
		current = current->next;
		free(temp); //��ó�� head ����
	}

	return 0;
}