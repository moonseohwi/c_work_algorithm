#include <stdio.h>

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
void partition(int a[], int n) {
	int pl = 0;            //왼쪽 커서(pivot left)
	int pr = n - 1;        //오른쪽 커서(pivot right)
	int pivot = a[n / 2];  //피벗은 가운데 요소 
	int temp;              //교환을 위한 임시변수

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

	//피벗, 피벗 이하의 그룹, 피벗 이상의 그룹 출력
	printf("피벗(pivot)의 값은 %d입니다.\n", pivot);
	printf("피벗(pivot) 이하의 그룹\n");
	for (int i = 0; i <= pl - 1; i++)
		printf("%d ", a[i]);
	putchar('\n');

	printf("피벗(pivot) 이상의 그룹\n");
	for (int i = pr + 1; i < n; i++)
		printf("%d ", a[i]);
	putchar('\n');
}

int main()
{
	int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);

	partition(arr, size);  //분할 함수 호출

	return 0;
}