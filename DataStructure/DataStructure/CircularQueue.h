//��� ���� - ����ü, �Լ� ����� 
#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H


#include <stdbool.h>
/*
	����ü ����� ���� ť 
*/

#define QUEUE_SIZE 10

typedef struct {
	int data[QUEUE_SIZE];
	int front;
	int rear;
}CircularQueue;

void initQueue(CircularQueue* q);

bool isEmpty(CircularQueue* q);

bool isFull(CircularQueue* q);

void enQueue(CircularQueue* q, int value);

int deQueue(CircularQueue* q);

void printQueue(CircularQueue* q);

















#endif