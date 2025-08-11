#include <stdio.h>
/*
	�Ǻ���ġ ����
	1 1 2 3 5 8 13...
	��°�� = ù°��  + ��°��
*/

int fibo(int n) {
	if (n <= 2)
		return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}

/*
	n = n, fibo(n) = fibo(n - 2) + fibo(n - 1)
	n = 4, fibo(4) = fibo(3) + fibo(2) = 3
	n = 3, fibo(3) = fibo(2) + fibo(1) = 2
	n = 2, fibo(2) = 1
	n = 1, fibo(1) = 1
	
*/

int main()
{
	/*
	printf("%d\n", fibo(4));  //3
	printf("%d\n", fibo(3));  //2
	printf("%d\n", fibo(2));  //1
	printf("%d\n", fibo(1));  //1
	*/

	puts("1�⵿���� �䳢�� ��ü �� ���");
	for (int i = 1; i <= 12; i++) {
		printf("%d ", fibo(i));
	}

	return 0;
}