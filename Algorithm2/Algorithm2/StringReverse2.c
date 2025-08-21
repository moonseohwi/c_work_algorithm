#include <stdio.h>
#include <string.h>

/*
	문자열 거꾸로 복사
*/

int main()
{
	//strlen()을 사용하여 거꾸로 복수하기
	char b1[] = "DOG";
	char b2[10];
	int i;
	int n = strlen(b1);  //문자의 개수

	printf("%d\n", n);  //3

	for (i = n - 1; i >= 0; i--) {
		b2[n - 1 - i] = b1[i];
	}
	b2[3] = '\0';

	printf("%s를 거꾸로 읽으면 %s\n", b1, b2);

	return 0;
}