#include <stdio.h>
/*
	�迭 ����� ���� ť(Queue) ����
	- ���Լ���(FIFO) : ���� �� �ڷḦ ���� ����
	- front: ������ ���� ��ġ
	- rear: ������ ���� ��ġ
*/
#define MAX_QUEUE 4 //ť�� �ִ� ũ��

//���� ����
int queue[MAX_QUEUE]; //������ ������ �迭 ����
int front = 0; //������ ���� ��ġ
int rear = 0;  //������ ���� ��ġ

//������ ����
void enQueue(int x) {
	if ((rear + 1) % MAX_QUEUE == front) {
		puts("ť�� ���� á���ϴ�.");
		return;
	}
	queue[rear] = x;  //���ʿ��� �ֱ�
	rear = (rear + 1) % MAX_QUEUE;
	//printf("front=%d, rear=%d, x=%d\n", front, rear, x);
	printf("%d ", x);
	/*
		front=0, rear=1, x=10
		front=0, rear=2, x=20
		front=0, rear=3, x=30
	*/
}

//������ ����
int deQueue() {
	if (front == rear) {
		puts("ť�� ������ϴ�.\n");
		return -1;
	}
	int data;  //������ ��
	data = queue[front];
	front = (front + 1) % MAX_QUEUE; //front�� �������� �̵�
	return data;
}

int main()
{
	puts("=== ť�� ������ �ֱ� ===");
	//���� ����: 10 - 20 - 30
	enQueue(10);
	enQueue(20);
	enQueue(30);
	//enQueue(40); //����, ť�� ���� ��

	puts("\n=== ť���� ������ ������ ===");
	int val;

	/*val = deQueue(); //10
	printf("%d\n", val);
	val = deQueue(); //20
	printf("%d\n", val);
	val = deQueue(); //30
	printf("%d\n", val);
	val = deQueue(); //ť�� ������� ó�� Ȯ��
	printf("%d\n", val);*/

	while (front != rear) { //������ ����
		val = deQueue();
		printf("%d ", val);
	}

	return 0;
}