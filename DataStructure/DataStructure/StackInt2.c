#include <stdio.h>

/*
	스택(Stack)
	- 배열에서 먼저 들어간 자료를 나중에 꺼냄(후입선출 : LIFO)구조
	- push(넣기), pop(꺼내기)
	- 입구 - top
*/

#define MAX_LEN 4    //스택의 크기 생성

//전역 변수 
int stack[MAX_LEN];  //스택 배열 생성
int top = -1;        //스택의 맨 위 생성

void push(int value) {
	if (top >= MAX_LEN - 1) {  //top : 0 ~ 2
		printf("스택이 가득 찼습니다.\n");
		return;
	}
	top++;
	stack[top] = value;   //처음은 0번에 저장
	printf("PUSH : %d\n", value);
}

int pop() {
	if (top < 0) {
		printf("스택이 비어있습니다.\n");
		return -1;
	}
	else {
		return stack[top--];  //후감소로 요소 반환
	}
}

int main()
{
	puts("== 스택에 자료 삽입 ==");
	//요소(값)을 추가 (80 - 70 - 95 - 85)
	push(80);
	push(70);
	push(95);
	push(85);
	//push(100);  //초과 입력시 실패!

	//안전한 삭제 방법
	puts("== 스택에 자료 삭제 ==");
	while (top != -1) {
		printf("%d ", stack[top]);
		pop();
	}

	return 0;
}