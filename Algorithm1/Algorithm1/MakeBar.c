#include <stdio.h>
/*
	- 평면(행, 열, 2차원)에 막대 그래프 그리기
	- 중첩 for문 
*/

int main()
{
	int arr[] = { 3 , 6 , 4 , 2 };
	int i, j;

	//막대 그래프 출력
	for (i = 0; i < 4; i++) {  //행 4 
		printf("arr[%d] = %d |", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) {  //열의 종료값 변화
			printf("*");
		}
		printf("\n");
	}

	/*
		i = 0, j = 1, *
			   j = 2, **
			   j = 3, ***
		i = 1, i = 1, *	   
				...
	*/

	return 0;
}