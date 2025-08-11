#include <stdio.h>
#include <stdlib.h>  //malloc(), free()

/*
	- 평면(행, 열, 2차원)에 막대 그래프 그리기
	- 중첩 for문
	- 동적 메모리 할당 - heap(힙) 영역을 사용
*/

int main()
{
	//배열의 동적 할당
	int* arr = NULL;  //포인터(동적 배열)
	int size;  //배열의 크기
	int i, j;

	//배열의 크기 입력
	printf("배열의 크기 입력 : ");
	scanf_s("%d", &size);

	//동적 메모리 할당
	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		puts("메모리 할당에 실패했습니다.\n");
		return 1;
	}

	//사용자 입력
	for (i = 0; i < size; i++) {
		printf("arr[%d] 입력 : ", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n");

	//막대 그래프 출력
	for (i = 0; i < size; i++) {  //행 4 
		printf("arr[%d] = %d |", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) {  //열의 종료값 변화
			printf("*");
		}
		printf("\n");
	}

	free(arr);  //메모리 해제

	return 0;
}