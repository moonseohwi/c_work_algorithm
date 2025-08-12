#include <stdio.h>
#include <stdbool.h>  // true / false연산자 사용 가능
/*
	- 최대공약수(Greatest Common Divisor) 구하기
		** 계산 과정 ** 
		1. 두 수중 거 작은 값을 i에 저장한다.
		2. i가 두 수의 공통된 약수인지 확인한다.
		3. 공통된 약수이면 이 값을 결과값으로 돌려주고 종료한다.
		4. 공통된 약수가 아니면 i를 1만큼 감소시키고, 2번으로 돌아가 반복한다.
*/

//min(최소값) 정의 
int min(int x, int y) {
	return (x < y) ? x : y;
}

//gcd 정의 
int gcd(int a, int b) {  //a=4, b=6
	int i;   //두 수중 더 작은 수 저장
	i = min(a, b);

	while (1) {
		if (a % i == 0 && b % i == 0)
			return i;
		i--;  //i를 1감소 시킴
	}
}
/*
	a = 4, b = 6 
	i = 4
	4 % 4 == 0 && 6 % 4 == 0, false
	i = 3
	4 % 3 == 0 && 6 % 3 == 0, false
	i = 2 (최대 공약수)
	4 % 2 == 0 && 6 % 2 == 0, true
*/

int main()
{
	printf("%d\n", gcd(4, 6));    //2   <-4와 6의 최대 공약수
	printf("%d\n", gcd(1, 5));    //1
	printf("%d\n", gcd(24, 60));  //12

	return 0;
}