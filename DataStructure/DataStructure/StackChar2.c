#include <stdio.h>

#define MAX_LEN 3

char stack[MAX_LEN];  //���ڸ� ������ ���� �迭
int top = -1;         //�� �� �ʱ�ȭ

void push(char ch) {
	if (top >= MAX_LEN - 1) {
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	stack[++top] = ch;
	printf("%c ", stack[top]);
}

char pop() {
	if (top < 0) {
		printf("������ ��� �ֽ��ϴ�.\n");
		return '\0';  //�ι��ڷ� ��ȯ
	}
	else {
		return stack[top--];
	}
}

int main()
{
	puts("== ���ÿ� �ڷ� ���� ==");
	push('a');
	push('b');
	push('c');
	push('d'); //�Է� �ʰ��� ����!

	//���� ������ ��Ģ������ ������� ���� (�Ǳ� �ϳ� ������� ����)
	//printf("%c\n", stack[0]);  //a

	puts("\n== ���ÿ� �ڷ� ���� ==");
	//������ ����
	while (top != -1) {
		printf("%c ", stack[top]);
		pop();
	}

	return 0;
}