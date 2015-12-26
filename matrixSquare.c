#include<stdio.h>

void main()
{
     int a[10][10],temp,i,j,ord;

     printf("enter the order");
     scanf("%d",&ord)
     
      for(i=0;i<ord;i++)
        {
             for(j=0;j<ord;j++)
               {
                    scanf("%d",&a[i][j]);
               }
         }

       for(i=0;i<ord;i++)
         {
              for(j=0;j<i;j++)
                {
                      temp=a[i][j];
                      a[i][j]=a[j][i];
                      a[j][i]=temp;
                 }
           }
        
        printf("the tranpose is");
        for(i=0;i<ord;i++)
          {
                for(j=0;j<ord;j++)
                  {
                        printf("%d",a[i][j]);
                  }
             printf("\n");
           }
}

