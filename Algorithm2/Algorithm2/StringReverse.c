#include <stdio.h>

/*
	문자열 거꾸로 복사
*/

int main()
{
	char a1[] = "DOG";  //'D' , 'O' , 'G' , '\0'
	char a2[10];  //충분한 크기 확보
	int i;

	//a1을 a2에 복사
	/*
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	printf("%s\n", a2);
	*/

	//a1을 a2에 거꾸로 복사
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';  //문자열을 복사한 후에 '\0' 추가

	printf("%s를 거꾸로 읽으면 %s\n",a1, a2);

	return 0;
}