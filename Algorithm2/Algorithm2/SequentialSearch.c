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

int main()
{
	int a[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int i;
	int x = 10;      //찾을 값
	int found = 0;   //토글(상태) 변수

	//반복 - 탑색
	for (i = 0; i < 9; i++) {
		if (a[i] == x) {
			printf("%d는(은) a[%d]에 있습니다.\n", x, i);
			found = 1;
			break;
		}
	}

	if (!found)
		printf("%d는(은) 없습니다.\n", x);

	return 0;
}