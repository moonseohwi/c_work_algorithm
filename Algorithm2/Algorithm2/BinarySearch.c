#include <stdio.h>

int main()
{
	//정렬된 배열
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int low, high, mid;
	int x;  //찾을 값

	low = 0;   //첫 인덱스
	high = 8;  //마지막 인덱스
	x = 8;

	while (low <= high) {
		//중간 인덱스
		mid = (low + high) / 2;
		printf("%d\n", mid);  // 4 -> 6 -> 7 -> 찾음

		if (arr[mid] == x) {
			printf("%d는(은) a[%d]에 있습니다.\n", x, mid);
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return 0;
}