#include <stdio.h>
#include <stdlib.h>

/*
	퀵 정렬
	- 분할 정복 방식으로 동작하는 매우 효율적인 정렬 알고리즘
	- 동작 원리(피벗 선택 -> 분할 -> 재귀 호출)
	- 각 부분ㅇ 배열의 길이가 1이하가 되면 정렬이 끝남
*/

//배열의 두 요소 교환
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//배열(a)를 피벗(pivot)을 기준으로 나눔
void quickSorting(int a[], int left, int right) {
	int pl = left;            //왼쪽 커서(pivot left)
	int pr = right;        //오른쪽 커서(pivot right)
	int pivot = a[(pl + pr) / 2];  //피벗은 가운데 요소 

	//분할 반복
	while (pl <= pr) {
		while (a[pl] < pivot)
			pl++;  //피벗보다 큰 값 나올 때까지 이동
		while (a[pr] > pivot)
			pr--;  //피벗보다 작은 값 나올 때까지 이동
		if (pl <= pr) {
			//교환 
			swap(&a[pl], &a[pr]); 
			pl++;
			pr--;
		}
	} //while 종료

	//재귀 호출
	if (left < pr)
		quickSorting(a, left, pr);  //배열의 왼쪽 부분 재귀호출
	if (pl < right)
		quickSorting(a, pl, right); //배열의 오른족 부분 재귀호출 
}

int main()
{
	int size;
	int* arr;

	puts(">>> 퀵 정렬 >>>");
	printf("요소의 개수 : ");
	scanf_s("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

	//사용자 입력
	for (int i = 0; i < size; i++) {
		printf("arr[%d] : ", i);
		scanf_s("%d", &arr[i]);
	}

	quickSorting(arr, 0, size - 1);  //분할 함수 호출

	puts("=== 퀵 정렬 후 ===");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	free(arr); //메모리 반납

	return 0;
}