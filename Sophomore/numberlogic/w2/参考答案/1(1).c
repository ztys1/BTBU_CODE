#include <stdio.h>

int main() {
	int num;
	printf("������һ����������");
	scanf("%d", &num); 
	
	int binary[32] = {0};
	
	int i = 0;
	while (num > 0) {
		binary[i] = num % 2;
		i++;
		num /= 2;
	}
	
	for (i--; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	
	printf("\n");
	
	return 0;
}