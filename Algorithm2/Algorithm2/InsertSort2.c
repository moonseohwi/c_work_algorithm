#include <stdio.h>
/*
	삽입 정렬
	- 선택한 요소를 그보다 더 앞쪽의 알맞은 위치에 삽입하는
	  작업을 반복하여 정렬하는 알고리즘이다.
*/

void insertSorting(int a[], int n) {
	int i, j, tmp;

	//삽입 정렬
	//주의 - i = 1부터 시작, 0은 정렬된 값으로 간주함
	for (i = 1; i < 5; i++) {
		tmp = a[i];  //삽입할 요소 저장
		for (j = i; j > 0 && a[j - 1] > tmp; j--) {
			a[j] = a[j - 1];  //이전 인덱스를 다음 인덱스에 저장 (한 칸 뒤로 밀기)
		}
		a[j] = tmp;  //tmp를 제자리 삽입
	}
}

int main()
{
	int arr[5] = { 41, 36, 8, 77, 15 };
	int i;
	int size; //배열의 크기

	size = sizeof(arr) / sizeof(arr[0]);

	insertSorting(arr, size); //삽입 정렬 함수 호출

	

	//정렬 후 출력
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);  //8 15 36 41 77
	}

	return 0;
}