#include <stdio.h>
/*
	- ���(��, ��, 2����)�� ���� �׷��� �׸���
	- ��ø for�� 
*/

int main()
{
	int arr[] = { 3 , 6 , 4 , 2 };
	int i, j;

	//���� �׷��� ���
	for (i = 0; i < 4; i++) {  //�� 4 
		printf("arr[%d] = %d |", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) {  //���� ���ᰪ ��ȭ
			printf("*");
		}
		printf("\n");
	}

	/*
		i = 0, j = 1, *
			   j = 2, **
			   j = 3, ***
		i = 1, i = 1, *	   
				...
	*/

	return 0;
}