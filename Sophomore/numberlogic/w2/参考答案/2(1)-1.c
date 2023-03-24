#include <stdio.h>


int BCD_add(short bcd1, short bcd2) {
	int i;
	char b1, b2;
	int b = 0;
	int sum = 0;
	
	for (i = 0; i < 4; i++) {
		b1 = (bcd1 >> (i * 4)) & 0xf;
		b2 = (bcd2 >> (i * 4)) & 0xf;
		b = b1 + b2;
		if (b + (sum >> (i * 4)) > 9)
			b += 6;
		
		b = b << (i * 4);
		sum += b;
	}
	return sum;
}


int main() {
	short bcd1 = 0x4294;
	short bcd2 = 0x6790;
	printf("%x + %x = %x", bcd1, bcd2, BCD_add(bcd1, bcd2));
	return 0;
}