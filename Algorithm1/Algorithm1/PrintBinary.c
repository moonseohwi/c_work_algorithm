#include <stdio.h>

void printBin(int a) {
	if (a == 0 || a == 1)
		printf("%d", a);
	else {
		printBin(a / 2);      //몫
		printf("%d", a % 2);  //나머지
	}
}

/*
      a 값                        몫   나머지
 printBin(11) , printBin(11/2) ,  5 ,   1
 printBin(5)  , printBin(5/2)  ,  2 ,   1
 printBin(2)  , printBin(2/2)  ,  1 ,   0
 printBin(1)  , printBin(1/2)  ,  0 ,   1
 //저장된 순서와 출력된 순서가 반대(스택 메모리 사용)
 //아래로 위로 기록 - 1011(뒤집어 출력)
 //가중치 방식
  11 -> 8 4 2 1
		1 0 1 1
*/

int main()
{
	int x = 11;

	printBin(x);  //1011

	return 0;
}