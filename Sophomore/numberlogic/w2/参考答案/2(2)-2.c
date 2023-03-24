#include <stdio.h>


short BCD_sub(short bcd1, short bcd2) {
	int i;
	char b1, b2;
	short b = 0;
	short sub = 0;
	
	for (i = 0; i < 4; i++) {
		b1 = (bcd1 >> (i * 4)) & 0xf;
		b2 = (bcd2 >> (i * 4)) & 0xf;
		b = b1 - b2;
		
		if (b + (sub >> (i * 4)) < 0) {
			b -= 6;
		}
		
		b = b << (i * 4);
		sub += b;
	}
	return sub;
}


int main() {
	short bcd1 = 0x8624;
	short bcd2 = 0x5659;
	printf("%hx - %hx = %hx", bcd1, bcd2, BCD_sub(bcd1, bcd2));
	return 0;
}