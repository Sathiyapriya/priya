#include<stdio.h>
float babylonian(float );
int main()
{
float num;
printf("enter the number");
scanf("%d",&num);
if(num<0)
{
return 0;
}
babylonian(num);
}

float babylonian(float num)
{
float x = num;
float y = 1;
float accuracy =0.00001;
while(x - y > accuracy)
{
	x = (x + y)/2;
	y = n/x;
}
return x;
}
