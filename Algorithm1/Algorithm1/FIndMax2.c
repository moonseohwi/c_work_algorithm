#include <stdio.h>

int max3(int a, int b, int c) {
	int max = a;  //최대값 지정
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;  //최대값 결과 반환
}

int main()
{
	//두 수 중에서 큰 값 계산
	int x = 10, y = 20;
	int result;  //더 큰 값 저장

	result = (x > y) ? x : y;
	printf("두 수중 더 큰 수 : %d\n", result);  //20

	//세개의 수중에서 최대값 찾기
	
	printf("max3(%d, %d, %d)중에 가장 큰 수는 = %d\n", 20 , 10, 30, max3(20, 10, 30));
	printf("max3(%d, %d, %d)중에 가장 큰 수는 = %d\n", 20 , 30, 10, max3(20, 10, 30));


	return 0;
}