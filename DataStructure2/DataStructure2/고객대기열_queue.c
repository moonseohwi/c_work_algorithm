#include <stdio.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define MAX_QUEUE 10 //ť�� �ִ� ũ��
#define NAME_LEN 20   //�� �̸��� �ִ����

//ť ����ü ����
typedef struct {
	char* data[MAX_QUEUE];  //������ �迭 ����
	int front;
	int rear;
}Queue;

//ť �ʱ�ȭ
void initQueue(Queue* q) {
	q->front = 0;
	q->rear = 0;
	for (int i = 0; i < MAX_QUEUE; i++) {
		q->data[i] = NULL;
	}
}

int main()
{
	Queue q;
	char name[NAME_LEN];
	bool run = true;
	int choice;

	initQueue(&q);

	while (run) {
		printf("\n=== �� ��⿭ ���� ===\n");
		printf("1. �� �߰� \n");
		printf("2. �� ó�� \n");
		printf("3. ��⿭ ��� \n");
		printf("4. ���� \n");
		printf("�޴� ���� : ");
		scanf("%d", &choice);
	}


	return 0;
}