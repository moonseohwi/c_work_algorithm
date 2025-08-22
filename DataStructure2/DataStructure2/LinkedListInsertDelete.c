#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
 	int data;           //노드가 저장하는 값
	struct Node* next;  //노드의 다음 주소(자기 참조) 
}Node;

//전역 변수
Node* head = NULL;  //리스트의 시작 노드

//함수의 원형 선언
void insertNodeEnd(int value); //맨 뒤 삽입
void printList();              //맨 앞 삽입
void deletsNode(value);        //노드 삭제
void insertNodeFront(value);   //리스트 출력
void freeList();               //메모리 해제

int main()
{
	bool run = true;
	int choice;  //선택 메뉴
	int value;   //입력할 값

	while (run) {
		printf("\n=== 연결 리스트 메뉴 ===\n");
		printf("1. 맨 뒤에 노드 삽입 \n");
		printf("2. 맨 앞에 노드 삽입 \n");
		printf("3. 노드 삭제 \n");
		printf("4. 리스트 출력 \n");
		printf("5. 종료 \n");
		printf("메뉴 선택 : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("삽입할 값 입력 : ");
			scanf("%d", &value);
			insertNodeEnd(value);
			break;
		case 2:
			printf("삽입할 값 입력 : ");
			scanf("%d", &value);
			insertNodeFront(value);
			break;
		case 3:
			printf("삭제할 값 입력 : ");
			scanf("%d", &value);
			deletsNode(value);
			break;
		case 4:
			printList();
			break;
		case 5:
			freeList(value);
			puts("프로그램 종료");
			run = false;
			break;
		default: 
			puts("잘못된 선택입니다. 다시 입력하세요.");
		}
	}

	return 0;
}

//main() 닫기
void insertNodeEnd(int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) {
		puts("메모리 할당 실패\n");
		return;
	}

	newNode->data = value;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;  //다음 노드로 이동
		}
		current->next = newNode;
	}
	printf("%d 맨 뒤 삽입 완료\n", value);
}

void printList() {
	if (head == NULL) {
		puts("리스트가 비어 있습니다.\n");
		return;
	}

	Node* current = head;
	printf("리스트 : ");
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	puts("NULL");
}

void insertNodeFront(value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) {
		puts("메모리 할당 실패");
		return;
	}

	newNode->data = value;
	newNode->next = head;
	head = newNode;
	printf("%d 맨 앞 삽입 완료\n", value);
}

void freeList() {
	Node* current = head;
	while (current != NULL) {
		Node* temp = current;  //현재 노드를 임시 노드에 저장
		current = current->next;
		free(temp);
	}
	head = NULL;
}

void deletsNode(value) {
	Node* current = head;
	Node* prev = NULL;

	//노드 탑색 - 삭제 노드 찾지 전
	while (current != NULL && current->data != value) {
		prev = current;           //prev 노드 이동
		current = current->next;  //current 노드 이동 
	}

	if (current == NULL) {
		printf("%d 값이 리스트에 없습니다.\n", value);
		return;
	}
	
	//노드 삭제
	if (prev == NULL) {        //첫 노드 삭제
		head = current->next;  //다음 노드가 head가 됨
	}
	else {                           //현재 노드 삭제
		prev->next = current->next;  //이전 노드가 현재 노드의 다음 노드가 연결
	}

	free(current); //현제 노드(삭제 노드)의 메모리 해제
	printf("%d 삭제 완료\n", value);
}