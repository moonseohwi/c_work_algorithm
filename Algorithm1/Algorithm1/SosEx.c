#include <stdio.h>
/*
	���(recursive) �˰���
	- � �Լ� �ȿ��� �ڱ� �ڽ��� �θ��� ���� ����
	- �ڱ� �ڽź��� ���� �Է°����� ȣ���Ѵ�.
*/

void func(int n) {
	if (n <= 0)
		return;
	else {
		printf("Help Me !\n");
		func(n - 1);
	}

	/*
		n=4, Help Me !  func(3)
		n=3, Help Me !  func(2)
		n=2, Help Me !  func(1)
		n=1, Help Me !  func(0)
		n=0, ��� ���� 
	*/

	/*
	printf("Help Me !\n");
	n--;

	if (n <= 0)
		return;  //����(��ȯ���� ����)
	else
		func(n);
	*/
}

int main()
{
	int count = 4;

	func(count);

	return 0;
}