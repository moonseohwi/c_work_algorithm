#include <stdio.h>

/*
	���ڿ� �Ųٷ� ����
*/

int main()
{
	char a1[] = "DOG";  //'D' , 'O' , 'G' , '\0'
	char a2[10];  //����� ũ�� Ȯ��
	int i;

	//a1�� a2�� ����
	/*
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	printf("%s\n", a2);
	*/

	//a1�� a2�� �Ųٷ� ����
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2 - i];
	}
	a2[3] = '\0';  //���ڿ��� ������ �Ŀ� '\0' �߰�

	printf("%s�� �Ųٷ� ������ %s\n",a1, a2);

	return 0;
}