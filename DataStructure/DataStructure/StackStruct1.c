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
	if (s->top < MAX_LEN - 1) {
		s->data[++(s->top)] = value;
		printf("PUSH : %d\n", value);
	}
	else {
		printf("������ ���� á���ϴ�. PUSH ���� : %d\n", value);
	}

}

//pop �Լ�
int pop(Stack* s) {
	if (s->top > -1) {
		return s->data[(s->top)--];
	}
	else {
		printf("������ ��� �ֽ��ϴ� POP ����\n");
		return -1;
	}
}

//������ ���� ���
void printStack(Stack* s) {
	printf("\n���� ������ ���� : \n");
	if (s->top == -1) {
		printf("(��� ����)\n");
	}
	else {
		printf("���� ����� �� : %d\n", s->top + 1);
		for (int i = 0; i < s->top; i++) {
			printf("%d\n", s->data[i]);
		}
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
	//push(&stack, 100);  //������ ���� á���ϴ�.

	puts("\n== ���ÿ� �ڷ� ���� ==");
	while (stack.top != -1) {
		printf("%d ", pop(&stack));
	}

	//������ ���� ���� ���
	printStack(&stack);

	return 0;
}