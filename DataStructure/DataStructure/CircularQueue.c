//CircularQueue.c - �Լ��� ������
#include <stdio.h>
#include "CircularQueue.h"

void initQueue(CircularQueue* q) {
	q->front = 0;
	q->rear = 0;
}

bool isEmpty(CircularQueue* q) {
	return q->front == q->rear;
}

bool isFull(CircularQueue* q) {
	return (q->rear + 1) % QUEUE_SIZE == q->front;
}

void enQueue(CircularQueue* q, int value) {
	if (isFull(q)) {
		puts("ť�� ���� á���ϴ�.");
		return;
	}
	q->data[q->rear] = value;
	q->rear = (q->rear + 1) % QUEUE_SIZE;
}

int deQueue(CircularQueue* q) {
	if (isEmpty(q)) {
		puts("ť�� ������ϴ�.\n");
		return;
	}
	int value; //ť���� ���� ��Ұ�
	value = q->data[q->front];
	q->front = (q->front + 1) % QUEUE_SIZE;
	return value;
}

void printQueue(CircularQueue* q) {
	printf("ť ����: ");
	if (isEmpty(q)) {
		puts("(��� ����)");
		return;
	}
	int i;
	i = q->front;
	while (i != q->rear) {
		printf("%d ", q->data[i]);
		i = (i + 1) % QUEUE_SIZE;
	}
	puts("\n");
}
