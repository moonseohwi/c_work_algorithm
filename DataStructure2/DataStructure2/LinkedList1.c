#include <stdio.h>

/*
	연결 리스트(Linked List)
	- 노드(node)라는 독립적인 메모리 블록이 포인터로 연결된 자료구조
	- 각 노드는 데이터 + 주소(다음 노드)로 구성됨
*/

typedef struct {
	int data;
	struct List* next;
}List;

int main()
{
	List x, y, z;  //노드 생성(3개)

	//데이터 저장
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//노드 연결(링크)
	x.next = &y;    //x(head) -> y
	y.next = &z;    //y -> z
	z.next = NULL;  //마지막 노드

	//노드 출력
	List* p;
	p = &x;  //head 노드의 주소 저장

	/*
	printf("%d %x\n", x.data, p->next);  //첫째 노드 출력
	p = p->next;  //다음 노드로 이동

	printf("%d %x\n", y.data, p->next);  //두번째 노드 출력
	*/
	
	puts("== 전체 노드 출력 ==");
		for (p = &x; p != NULL; p = p->next) {
			printf("%d -> ", p->data);
	}
	puts("NULL\n");

	puts("*** 노드 y 삭제 ***");
	x.next = y.next;  //x -> z 로 연결
	y.next = NULL;

	for (p = &x; p != NULL; p = p->next) {
		printf("%d -> ", p->data);
	}
	puts("NULL\n");

	return 0;
}