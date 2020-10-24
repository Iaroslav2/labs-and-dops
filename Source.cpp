#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int
main() {
	int k, t, h;
	k = 1;
	t = 0;
	while (k != 0) {
		printf("enter number ->");
		scanf("%d", &k);
		if (k > t) {
			t = k;
		};
	};
	printf("%d", t);
	return 0;
};