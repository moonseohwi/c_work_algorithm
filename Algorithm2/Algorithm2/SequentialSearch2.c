#include <stdio.h>

/*
	 순차검색(Sequential Search)
	  - 동작원리
		1. 배열의 첫번째 요소부터 하나씩 검사
		2. 찾는 값과 같으면 위치 출력
		3. 찾았으면 종료
		4. 끝까지 못찾으면 “없음“ 출력
	  - 특징
		1. 구현이 매우 간단하다.
		2. 데이터가 많아지면 속도가 느려진다. ?시간 복잡도 O(n)
		3. 불필요한 비교?값을 찾았어도 반복문이 끝가지 돎
*/

void sequentialSearch(int a[], int n, int x) {
	int i, found = 0;

	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d는(은) a[%d]에 있습니다.\n", x, i);
			found = 1;
			break;
		}
	}

	if (!found)
		printf("%d는(은) 없습니다.\n", x);
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;
	int x = 6;      //찾을 값

	size = sizeof(a) / sizeof(a[0]);

	sequentialSearch(a, size, x);

	return 0;
}