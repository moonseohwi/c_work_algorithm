#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int strLength(char* s){
	int len = 0;

	while (*s++ != '\0')  //�ٸ� ��� : while (s[len] != '\0')
		len++;
	return len;  //���ڿ��� ���� ��ȯ
}

int main()
{
	char a[] = "DOG";
	char* b = "DOG";

	//���ڿ��� ����
	printf("%s %d\n", a, strlen(a));
	printf("%s %d\n", b, strlen(b));

	//�ε���
	printf("%c\n", b[0]);  //D
	printf("%c\n", b[1]);  //O
	printf("%c\n", b[2]);  //G

	//���ڿ� �Լ� ���� �����
	//char str[] = "MONKEY";
	char str[128];
	int len;

	printf("���ڿ� �Է� : ");
	scanf("%s", str);

	len = strLength(str);  //���ڿ� ���� �Լ� ȣ��

	printf("%d\n", len);
}