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

int seqSearch(int a[], int n, int x) {
	int i = 0;
	while (1) {
		if (i == n)    //ex) n = 9 <범위 밖>
			return -1; //검색 실패
		if (a[i] == x)
			return i;  //검색 성공
		i++;
	}
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;
	int x = 6;    //찾을 값
	int idx;      //배열의 인덱스

	size = sizeof(a) / sizeof(a[0]);

	idx = seqSearch(a, size, x);  //순차 탑색 함수 호출

	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는(은) a[%d]에 있습니다.\n", x, idx);

	return 0;
}