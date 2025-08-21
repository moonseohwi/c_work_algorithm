#include <stdio.h>

/*
	����ü ����� ���� ����
*/

#define MAX_LEN 4

//���� ����ü ����
typedef struct {
	int data[MAX_LEN];  //������ ������ �迭
	int top;  //top �ε���
}Stack;

//���� �ʱ�ȭ �Լ�
void initStack(Stack* s) {
	s->top = -1;
}

//push �Լ� ���� 
void push(Stack* s, int value) {
	if (s->top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	s->data[++(s->top)] = value;
	printf("%d ", value);
}

//pop �Լ�
int pop(Stack* s) {
	if (s->top < 0) {
		printf("������ ��� �ֽ��ϴ�.\n");
		return -1;
	}
	else {
		return s->data[(s->top)--];
	}
}

int main()
{
	Stack stack;  //����ü ���� ����

	initStack(&stack);  //�ּҸ� ����

	puts("== ���ÿ� �ڷ� ���� ==");
	push(&stack, 80);
	push(&stack, 70);
	push(&stack, 90);
	push(&stack, 85);
	push(&stack, 100);  //������ ���� á���ϴ�.

	puts("\n== ���ÿ� �ڷ� ���� ==");
	pop(&stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);

	return 0;
}