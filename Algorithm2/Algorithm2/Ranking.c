#include <stdio.h>
#include <stdlib.h>
/*
	순위 정하기 
	- 배열의 한 요소가 모든 요소와 비교함
	- rank 배열을 1로 초기화함
	- 어떤 요소가 자기보다 크면 rank 요소를 1 증가 시킨다.
*/

int main()
{
	int arr[] = { 41, 8, 36, 77, 15 };
	//int rank[5];
	int size = sizeof(arr) / sizeof(arr[0]);
	int* rank;  //포인터를 사용해 동적 할당
	int i, j;

	rank = (int*)malloc(sizeof(int) * size);

	//비교 후 순위 결정
	for (i = 0; i < size; i++) {
		rank[i] = 1;
		for (j = 0; j < size; j++) {
			if (arr[i] < arr[j])
				rank[i]++;  //rank[i] = rank[i] + 1;
		}
	}

	//순위 출력
	for (i = 0; i < size; i++) {
		printf("%d ", rank[i]);  // { 2, 5, 3, 1, 4 }
	}

	free(rank);

	return 0;
}