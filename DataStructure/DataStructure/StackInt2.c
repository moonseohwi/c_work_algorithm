#include <stdio.h>

/*
	����(Stack)
	- �迭���� ���� �� �ڷḦ ���߿� ����(���Լ��� : LIFO)����
	- push(�ֱ�), pop(������)
	- �Ա� - top
*/

#define MAX_LEN 4    //������ ũ�� ����

//���� ���� 
int stack[MAX_LEN];  //���� �迭 ����
int top = -1;        //������ �� �� ����

void push(int value) {
	if (top >= MAX_LEN - 1) {  //top : 0 ~ 2
		printf("������ ���� á���ϴ�.\n");
		return;
	}
	top++;
	stack[top] = value;   //ó���� 0���� ����
	printf("PUSH : %d\n", value);
}

int pop() {
	if (top < 0) {
		printf("������ ����ֽ��ϴ�.\n");
		return -1;
	}
	else {
		return stack[top--];  //�İ��ҷ� ��� ��ȯ
	}
}

int main()
{
	puts("== ���ÿ� �ڷ� ���� ==");
	//���(��)�� �߰� (80 - 70 - 95 - 85)
	push(80);
	push(70);
	push(95);
	push(85);
	//push(100);  //�ʰ� �Է½� ����!

	//������ ���� ���
	puts("== ���ÿ� �ڷ� ���� ==");
	while (top != -1) {
		printf("%d ", stack[top]);
		pop();
	}

	return 0;
}