//найти самое популярное число 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int mas[11];
	int  i, k, num, a, t,  max;
	for (i = 0; i < 11; i++) {
	    while (printf("Number: ") && scanf("%d", &mas[i]) != 1) {
			char c;
			while (scanf("%c", &c) == 1 && c != '\n');
		printf("CHISLOO\n");
		}
	}
		num = mas[0];
		max = 1;
		for (i = 0; i < 11; i++) {
			a = 1;
			for (k = i + 1; k < 11; k++) {
				if (mas[i] == mas[k]) {
					a++;
				}
				if (a > max) {
					max = a;
					num = mas[i];

				}
			}
		}
		if (max > 1) {
			printf("%d raz vsrtechaetsa chislo %d", max, num);
		}
		else {
			printf("Net povtora\n");
		}
	return 0;
}
