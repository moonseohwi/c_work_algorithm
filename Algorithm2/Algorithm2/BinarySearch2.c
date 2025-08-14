#include <stdio.h>

int main()
{
	//정렬된 배열
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int low, high, mid;
	int x;      //찾을 값
	int found;  //상태(찾음/못참음)

	low = 0;   //첫 인덱스
	high = 8;  //마지막 인덱스
	x = 10;    //찾을 값
	found = 0;
	
	while (low <= high) {
		//중간 인덱스
		mid = (low + high) / 2;

		if (arr[mid] == x) {
			printf("%d는(은) a[%d]에 있습니다.\n", x, mid);
			found = 1;  //찾음
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	if (!found)  //찾지 못함
		printf("%d는(은) 없습니다.\n", x);

	return 0;
}