#include <stdio.h>
/*
	피보나치 수열
	1 1 2 3 5 8 13...
	세째항 = 첫째항  + 둘째항

	메모이제이션(memorization) - 메모 기법
	- 어떤 문제에 대한 해답을 얻으면 그것을 메모해 둔다.
	계산 복잡도 - O(2^n) -> O(n)
*/

int memo[50] = { 0 };    //계산 결과 저장

int fibo(int n) {
	if (memo[n] != 0)
		return memo[n];  //이미 계산했으면 바로 반환
	
	if (n <= 2)
		return memo[n] = 1;  //저장 후 반환
	else
		return memo[n] = fibo(n - 2) + fibo(n - 1);
}

int main()
{
	puts("1년동안의 토끼의 개체 수 출력");
	for (int i = 1; i <= 12; i++) {
		printf("%d ", fibo(i));
	}

	return 0;
}