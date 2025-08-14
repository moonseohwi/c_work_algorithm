#include <stdio.h>

//찾을려고 하는 수를 못찾았을 때 (실패)
int main()
{
	int a[] = { 9, 8, 7, 6, 7 };
	int i;
	int x = 3;  //찾을 값
	int sw = 0; //토글(상태) 변수 - 발견/발견못함

	for (i = 0; i < 5; i++) {
		if (a[i] == x) {
			printf("%d 발견!\n", x);
			sw = 1;
			break;  //발견 후 빠져나옴
		}
	}

	if (!sw) {  //sw = 0
		printf("%d 발견 못함!\n", x);
	}

	return 0;
}