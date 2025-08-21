#include "CircularQueue.h"

int main()
{
	CircularQueue q1;  //����ü ����
	CircularQueue q2;

	//ť �ʱ�ȭ �Լ� ȣ��
	initQueue(&q1);
	initQueue(&q2);

	puts("=== ť1�� ������ �ֱ� ===");
	enQueue(&q1, 10);
	enQueue(&q1, 20);
	enQueue(&q1, 30);
	printQueue(&q1);

	puts("=== ť1���� ������ ������ ===");
	printf("%d ", deQueue(&q1));
	printf("%d ", deQueue(&q1));
	//printf("%d ", deQueue(&q1));
	printQueue(&q1);

	puts("=== ť2�� ������ �ֱ� ===");
	enQueue(&q2, 100);
	enQueue(&q2, 200);
	printQueue(&q2);

	return 0;
}