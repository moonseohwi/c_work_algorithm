#include <stdio.h>

int main()
{
	int arr[] = { 53, 11, 65, 36, 29 };
	int i, max;

	//배열의 첫번째 값을 최대값으로 지정
	max = arr[0];

	for (i = 0; i < 5; i++) {
		if (arr[i] > max)   //max와 arr의 요소 값을 비교 
			max = arr[i];   //최대값 변경
	}

	printf("최대값 : %d\n", max);  //65

	return 0;
}