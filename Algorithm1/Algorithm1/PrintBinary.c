#include <stdio.h>

void printBin(int a) {
	if (a == 0 || a == 1)
		printf("%d", a);
	else {
		printBin(a / 2);      //��
		printf("%d", a % 2);  //������
	}
}

/*
      a ��                        ��   ������
 printBin(11) , printBin(11/2) ,  5 ,   1
 printBin(5)  , printBin(5/2)  ,  2 ,   1
 printBin(2)  , printBin(2/2)  ,  1 ,   0
 printBin(1)  , printBin(1/2)  ,  0 ,   1
 //����� ������ ��µ� ������ �ݴ�(���� �޸� ���)
 //�Ʒ��� ���� ��� - 1011(������ ���)
 //����ġ ���
  11 -> 8 4 2 1
		1 0 1 1
*/

int main()
{
	int x = 11;

	printBin(x);  //1011

	return 0;
}