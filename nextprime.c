#include<stdio.h>
int main()
{
int num=8,i,j,flag; 	
printf("enter the number");
scanf("%d",&num);
if(num<2)
{
    return 2;
}
for(i=num+1; i>0; i++)
{
    for(j=2; j<i; j++)
    {
        if((i%j)!=0)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d",i);
        break;
    }
}
return 0;
}
