#include <stdio.h>
#include <stdbool.h>  // true / false������ ��� ����
/*
	- �ִ�����(Greatest Common Divisor) ���ϱ�
		** ��Ŭ���� �˰��� **
		- a�� b�� �ִ������� 'b'�� 'a�� b�� ���� ������'�� �ִ������� ����.
		- � ���� 0�� �ִ������� �ڱ��ڽ��̴�. �� , gcd(n, 0) = n�̴�.
*/
//gcd ���� 
int gcd(int a, int b) {  
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

/*
	a = 60, b = 24
	gcd(60, 24) = gcd(24, 60 % 24) = gcd(12, 24 % 12) = gcd(12, 0) = 12
	
	a = 81, b = 27
	gcd(81, 27) = gcd(27, 81 % 27) = gcd(27 , 0) = 27
*/

int main()
{
	/*
	printf("%d\n", gcd(4, 6));    //2   <-4�� 6�� �ִ� �����
	printf("%d\n", gcd(1, 5));    //1
	printf("%d\n", gcd(24, 60));  //12
	printf("%d\n", gcd(81, 27));  //27
	*/

	//����� �Է�
	int x, y;
	puts("�� ���� �ִ������� ���մϴ�.");
	printf("ù��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &x);
	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf_s("%d", &y);

	printf("�� ������ �ִ������� %d�Դϴ�.\n", gcd(x, y));
	return 0;
}