#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	������ ������ ���ڿ� ���� ó��
*/

#define MAX_LEN 128

typedef struct {
	char data[MAX_LEN];  //���ڿ� ������ �迭
	int top;  //top �ε���
}Stack;

void initStack(Stack* s) {
	s->top = -1;
}

void push(Stack* s, char ch) {
	if (s->top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	else {
		s->data[++(s->top)] = ch;
	}
}

int pop(Stack* s) {  //
	if (s->top < 0) {
		printf("������ ��� �ֽ��ϴ�.\n");
		return -1;
	}
	else {
		return s->data[s->top--];  //���� ��ȯ
	}
}

int main()
{
	Stack stack;
	char str[MAX_LEN];  //���ڿ��� ������ �迭

	initStack(&stack);

	//����� �Է�
	printf("���ڿ� �Է� : ");
	//scanf("%s", str);
	//fgets(�迭, �迭�� ũ��, �Է½�Ʈ��), ����Ϳ� ���-stdout
	fgets(str, MAX_LEN, stdin);  //���� ���� ���� �Է� ����

	//push - ���ڿ��� �� ���ھ� ����
	for (int i = 0; str[i] != '\0'; i++) {
		push(&stack, str[i]);
	}

	//pop - ����� ���
	printf("������ ���ڿ� : ");
	while (stack.top != -1) {
		printf("%c", pop(&stack));
	}

	return 0;
}