#include <stdio.h>
/*
	����ü �迭�� ������ �̵�
*/

//�л� ����ü ����
typedef struct {
	int num;  //�л� ��ȣ
}Student;

int main()
{
	Student st[10];  //����ü �迭 ����
	int i;

	for (i = 0; i < 10; i++) {
		st[i].num = i + 1;  //1 ~ 10���� ����
	}

	//���
	for (i = 0; i < 10; i++) {
		printf("%d ", st[i].num);  //1 2 3 4 5 6 7 8 9 10
	}

	puts("\n4�� �л� ����");
	st[3].num = 0;  //�ʱ�ȭ

	puts("���� �������� �̵�");
	for (i = 3; i < 9; i++) {
		st[i].num = st[i + 1].num;
	}
	st[9].num = 0;

	//�� �̵� �� ���
	for (i = 0; i < 10; i++) {
		printf("%d ", st[i].num);  //1 2 3 5 6 7 8 9 10 0
	}

	return 0;
}