#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//최대값 구하는 함수
int findMax(int a[], int len) {
	int max = a[0];  //배열의 첫 요소 - 최대값 설정
	for (int i = 0; i < len; i++) {
		if (a[i] > max)   //max와 arr의 요소 값을 비교 
			max = a[i];   //최대값 변경
	}
	return max;
}

int main()
{
	//사람의 키를 입력받아 최대값 구하기
	int number;   //사람 수 
	int* height;  //동적 할당
	int i;        //반복 변수 

	printf("사람 수 입력 : ");
	scanf("%d", &number);
	height = (int*)malloc(sizeof(int) * number);
	if (height == NULL) {
		puts("메모리 할당에 실패했습니다.");
		return 1;
	}

	printf("%d명의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}

	printf("최대값은 %d입니다.\n", findMax(height, number));

	free(height);  //메모리 해제

	/*
	//정적 할당
	int arr[] = { 2, 5, 1, 4, 3 };
	int size, max;

	size = sizeof(arr) / sizeof(arr[0]); //20(4*5) / 4 = 5  
	max = findMax(arr, size);

	printf("최대값 : %d\n", max);
	*/

	return 0;
}