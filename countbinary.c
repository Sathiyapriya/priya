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
        dec >>= 1;// dividing by 2^1
        count++;
    }
    printf("\n%d bits are required to represent the given decimal number,count);
}
 
