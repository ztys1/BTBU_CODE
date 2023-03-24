#include <stdio.h>

int main() {
	int l;
	
	char c = 'A';
	printf("c = %c\n", c);
	for (l = sizeof(c) * 8 - 1; l >= 0; l--) {
		if (c & (1 << l))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	
	short s = 40;
	printf("s = %d\n", s);
	for (l = sizeof(s) * 8 - 1; l >= 0; l--)
		printf("%d", (s >> l) & 1);
	printf("\n");
	
	int i = 100;
	printf("i = %d\n", i);
	for (l = sizeof(i) * 8 - 1; l >= 0; l--)
		printf("%d", (i >> l) & 1);
	printf("\n");
	
	int j = -100;
	printf("j = %d\n", j);
	for (l = sizeof(j) * 8 - 1; l >= 0; l--)
		printf("%d", (j >> l) & 1);
	printf("\n");
	return 0;
}
