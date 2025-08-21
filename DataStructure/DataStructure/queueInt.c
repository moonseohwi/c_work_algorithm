#include <stdio.h>
/*
	배열 기반의 원형 큐(Queue) 구현
	- 선입선출(FIFO) : 먼저 들어간 자료를 먼저 꺼냄
	- front: 데이터 꺼낼 위치
	- rear: 데이터 넣을 위치
*/
#define MAX_QUEUE 4 //큐의 최대 크기

//전역 변수
int queue[MAX_QUEUE]; //정수를 저장할 배열 생성
int front = 0; //데이터 꺼낼 위치
int rear = 0;  //데이터 넣을 위치

//데이터 삽입
void enQueue(int x) {
	if ((rear + 1) % MAX_QUEUE == front) {
		puts("큐가 가득 찼습니다.");
		return;
	}
	queue[rear] = x;  //뒤쪽에서 넣기
	rear = (rear + 1) % MAX_QUEUE;
	//printf("front=%d, rear=%d, x=%d\n", front, rear, x);
	printf("%d ", x);
	/*
		front=0, rear=1, x=10
		front=0, rear=2, x=20
		front=0, rear=3, x=30
	*/
}

//데이터 삭제
int deQueue() {
	if (front == rear) {
		puts("큐가 비었습니다.\n");
		return -1;
	}
	int data;  //꺼내온 값
	data = queue[front];
	front = (front + 1) % MAX_QUEUE; //front는 뒤쪽으로 이동
	return data;
}

int main()
{
	puts("=== 큐에 데이터 넣기 ===");
	//삽입 순서: 10 - 20 - 30
	enQueue(10);
	enQueue(20);
	enQueue(30);
	//enQueue(40); //오류, 큐가 가득 참

	puts("\n=== 큐에서 데이터 꺼내기 ===");
	int val;

	/*val = deQueue(); //10
	printf("%d\n", val);
	val = deQueue(); //20
	printf("%d\n", val);
	val = deQueue(); //30
	printf("%d\n", val);
	val = deQueue(); //큐가 비었을때 처리 확인
	printf("%d\n", val);*/

	while (front != rear) { //안전한 삭제
		val = deQueue();
		printf("%d ", val);
	}

	return 0;
}