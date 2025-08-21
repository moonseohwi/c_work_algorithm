#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy()
/*
   Queue�� Ȱ���� ����⿭ ���α׷�

   char str[3][20] = {"��A", "��B", "��C"};
   char* str[] = {"��A", "��B", "��C"};

   char str2[] = "��A";
   char* name = "��B";

   queue[0] = {'��', '��', 'A', '\0'}
   queue[1] = {'��', '��', 'B', '\0'}
   queue[2] = {'��', '��', 'C', '\0'}
   queue[3] = {?, ?, ?...}

*/
#define MAX_QUEUE 4
#define NAME_LEN 20

//���� ����
char queue[MAX_QUEUE][NAME_LEN]; //������ �迭 ����
int front = 0;
int rear = 0;

//ť�� ����ִ��� Ȯ��
int isEmpty() {
	return front == rear; //��(1), ����(0)
}

//ť�� ���� á���� Ȯ��
int isFull() {
	return (rear + 1) % MAX_QUEUE == front;
}

void enQueue(const char* name) {
	if (isFull()) {
		puts("ť�� ���� á���ϴ�.");
		return;
	}
	strcpy(queue[rear], name); //���ʿ��� �� �̸� ����(�߰�)
	rear = (rear + 1) % MAX_QUEUE;
}

int deQueue(char* name) {
	if (isEmpty()) {
		puts("ť�� ������ϴ�.");
		name[0] = '\0'; //name�� �� ���ڷ� �ʱ�ȭ{'��', '��', 'A', '\0'}
		return -1; //����
	}
	strcpy(name, queue[front]);
	front = (front + 1) % MAX_QUEUE;
	return 0; //����
}

int main()
{
	char customer[NAME_LEN]; //ť���� ���� �̸�

	//�� ��⿭ �߰�
	enQueue("��A");
	enQueue("��B");
	enQueue("��C");

	//��⿭ ó��
	while (!isEmpty()) {
		deQueue(customer);
		printf("%s�� ���� ó����...\n", customer);
	}
	puts("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");

	return 0;
}