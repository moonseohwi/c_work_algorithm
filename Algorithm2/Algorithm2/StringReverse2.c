#include <stdio.h>
#include <string.h>

/*
	���ڿ� �Ųٷ� ����
*/

int main()
{
	//strlen()�� ����Ͽ� �Ųٷ� �����ϱ�
	char b1[] = "DOG";
	char b2[10];
	int i;
	int n = strlen(b1);  //������ ����

	printf("%d\n", n);  //3

	for (i = n - 1; i >= 0; i--) {
		b2[n - 1 - i] = b1[i];
	}
	b2[3] = '\0';

	printf("%s�� �Ųٷ� ������ %s\n", b1, b2);

	return 0;
}