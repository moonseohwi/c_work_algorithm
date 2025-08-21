#include <stdio.h>
#include <stdlib.h>  //malloc()

/*
	���� �޸� ��� ���� ����Ʈ
*/

typedef struct {
	int data;           //��尡 �����ϴ� ��
	struct Node* next;  //���� ����� �ּ�
}Node;

int main()
{
	//��� 3�� ����
	Node* head;
	Node* second;
	Node* third;

	head = (Node*)malloc(sizeof(Node));
	second = (Node*)malloc(sizeof(Node));
	third = (Node*)malloc(sizeof(Node));

	//������ ����(��� ���ᵵ �Ͼ��)
	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;  //������ ���

	//���
	Node* current = head;  //���� ��带 �����ϰ� head ��带 ������
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;  //���� ���� �̵�
	}
	puts("NULL\n");

	//�޸� ����
	free(third);
	free(second);
	free(head);

	return 0;
}