#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc()

/*
	선택 정렬(Selection Sorting)
	- 배열에서 가장 작은 값을 찾아 맨 앞으로 보내는 방식
	- 현재 행의 첫째 위치 고정
	- 정렬이 안된 영역에서 최소값의 위치를 찾음
	- 앞 요소와 교환 처리
*/

void selectionSorting(int a[], int n) {
	int i, j, temp;
	int minIdx;

	//비교와 교환 반복
	for (i = 0; i < n - 1; i++) {
		minIdx = i;  //현재 위치(행)를 최소값으로 설정
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[minIdx])
				minIdx = j;  //비교 후 최소값 위치 변경
		}
		//교환  
		temp = a[i];
		a[i] = a[minIdx];
		a[minIdx] = temp;
	}
}

int main()
{
	int size;  //배열의 크기
	int* arr;  //배열(동적 할당)
	int i;
	
	puts("===== 선택 정렬 =====");
	printf("요소의 개수 입력 : ");
	scanf("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

	//사용자 입력
	for (i = 0; i < size; i++) {
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	selectionSorting(arr, size);  //선택 정렬 함수 호출

	//정렬 후 출력
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}