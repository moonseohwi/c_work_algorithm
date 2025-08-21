#include <stdio.h>

#define MAX_LEN 3

char stack[MAX_LEN];  //문자를 저장할 스택 배열
int top = -1;         //맨 위 초기화

void push(char ch) {
	if (top >= MAX_LEN - 1) {
		printf("스택이 가득 찼습니다.\n");
		return;
	}
	stack[++top] = ch;
	printf("%c ", stack[top]);
}

char pop() {
	if (top < 0) {
		printf("스택이 비어 있습니다.\n");
		return '\0';  //널문자로 반환
	}
	else {
		return stack[top--];
	}
}

int main()
 {
	puts("== 스택에 자료 삽입 ==");
	push('a');
	push('b');
	push('c');
	push('d'); //입력 초과로 실패!

	puts("== 스택에 자료 삭제 ==");
	printf("%c\n", pop());  //c
	printf("%c\n", pop());  //b
	printf("%c\n", pop());  //a 
	printf("%c\n", pop());  //스택이 비어 있습니다.  

	return 0;
}