#include <stdio.h>
void countbits(int);

int main(void) {
    int decimal;
    printf("\n enter the decimal");
    scanf("%d",&decimal);
    countbits(decimal);
	return 0;
}
void countbits(int dec)
{
    int count=0;
    while(dec)
    {
        dec >>= 1;
        count++;
    }
    printf("\ncount of number of binarybits for the given decimal number is:%d",count);
}
