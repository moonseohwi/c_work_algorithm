#include <stdio.h>
#include <stdlib.h>  //malloc()

/*
	동적 메모리 기반 연결 리스트
*/

typedef struct {
	int data;           //노드가 저장하는 값
	struct Node* next;  //다음 노드의 주소
}Node;

int main()
{
	//노드 3개 생성
	Node* head;
	Node* second;
	Node* third;

	head = (Node*)malloc(sizeof(Node));
	second = (Node*)malloc(sizeof(Node));
	third = (Node*)malloc(sizeof(Node));

	//데이터 저장(노드 연결도 일어난다)
	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;  //마지막 노드

	//출력
	Node* current = head;  //현재 노드를 생성하고 head 노드를 저장함
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;  //다음 노드로 이동
	}
	puts("NULL\n");

	//메모리 해제
	free(third);
	free(second);
	free(head);

	return 0;
}