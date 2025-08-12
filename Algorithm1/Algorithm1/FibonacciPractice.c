#include <stdio.h>

int func(int n) {
	if (n == 1)
		return 1;
	else
		return n * func(n - 1);
}

int main() {
	int i;

	for (i = 5; i >= 0; i--) {
		if (i % 2 == 1)
			printf("func(%d) : %d\n", i, func(i));
	}
	return 0;
}