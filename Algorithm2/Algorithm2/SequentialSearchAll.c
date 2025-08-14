#include <stdio.h>
#include <stdlib.h>

/*
	중복 값 찾기
*/

int seqSearchAll(int a[], int n, int x, int idxs[]) {
	int i, count = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			idxs[count++] = i;  
			/*
				idxs[0] = 5
				idxs[1] = 8
			*/
		}
	}
	return count;  //찾은 개수 반환
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1 ,3 ,6 };  //6이 두 번 있음
	int size, i;
	int x = 6;   //찾을 값
	int* idxs;   //찾을 인덱스 저장할 배열(동적 할당)
	int count;   //검색값의 개수

	size = sizeof(a) / sizeof(a[0]);
	idxs = (int*)malloc(sizeof(int) * size);

	count = seqSearchAll(a, size, x, idxs);  //순차 탑색 함수 호출
	if (count == 0) {
		puts("검색에 실패했습니다.");
	}
	else {
		printf("%d은(는) 총 %d개 발견되었습니다.\n", x, count);
		printf("위치 : ");
		for (i = 0; i < count; i++) {
			printf("a[%d] ", idxs[i]);
		}
	}
	
	free(idxs);

	return 0;
}