#include <stdio.h>

/*
	구조체 기반의 스택 구현
*/

#define MAX_LEN 4

//스택 구조체 정의
typedef struct {
	int data[MAX_LEN];  //정수를 저장할 배열
	int top;  //top 인덱스
}Stack;

//스택 초기화 함수
void initStack(Stack* s) {
	s->top = -1;
}

//push 함수 정의 
void push(Stack* s, int value) {
	if (s->top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다.\n");
		return;
	}
	s->data[++(s->top)] = value;
	printf("%d ", value);
}

//pop 함수
int pop(Stack* s) {
	if (s->top < 0) {
		printf("스택이 비어 있습니다.\n");
		return -1;
	}
	else {
		return s->data[(s->top)--];
	}
}

int main()
{
	Stack stack;  //구조체 변수 생성

	initStack(&stack);  //주소를 전달

	puts("== 스택에 자료 삽입 ==");
	push(&stack, 80);
	push(&stack, 70);
	push(&stack, 90);
	push(&stack, 85);
	push(&stack, 100);  //스택이 가득 찼습니다.

	puts("\n== 스택에 자료 삭제 ==");
	pop(&stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);
	pop(&stack);

	return 0;
}