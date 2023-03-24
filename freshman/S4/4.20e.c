#include <stdio.h>
int main() {
	int i=0;
	int t=0;
    int num=0;

    scanf("\n");
	for (i = 100;i <= 200;i++) {
		for ( t = 2;t < i;t++) {
			if (i % t == 0) {
				break;
			}
		}
		if (i == t) {
			num++;
		}
        
	}
    printf("%d个\n", num);
	return 0;
}
