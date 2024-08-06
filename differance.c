#include<stdio.h>

void main()
{
    int a,b,c;
    printf( "Enter The first Number");
    scanf("%d",&a);
    printf( "Enter The second Number");
    scanf("%d",&b);
    printf( "Enter The Third Number");
    scanf("%d",&c);
   if (a>b && a>c )
    {printf("A:%d is greater", a); }
    else if (b>a && b>c)
  { printf("B:%d is greater", b);}
    else
   { printf("C:%d is greater", c);
    }


}