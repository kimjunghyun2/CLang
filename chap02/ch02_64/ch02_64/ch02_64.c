#include<stdio.h>
int main() {
	
	unsigned char fourBitVal1 = 0x05, fourBitVal2 = 0x07;
	unsigned char eightBitVal;
	eightBitVal = fourBitVal1 << 4;
	eightBitVal |= fourBitVal2; // eightBitVal = eightBitVal | fourBitVal2

	printf("%x\t %x\t -> %x\n", fourBitVal1, fourBitVal2, eightBitVal);
	return 0;

}