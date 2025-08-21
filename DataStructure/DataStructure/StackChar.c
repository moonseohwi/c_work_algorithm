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

	puts("== ���ÿ� �ڷ� ���� ==");
	printf("%c\n", pop());  //c
	printf("%c\n", pop());  //b
	printf("%c\n", pop());  //a 
	printf("%c\n", pop());  //������ ��� �ֽ��ϴ�.  

	return 0;
}