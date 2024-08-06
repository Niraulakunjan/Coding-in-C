#include<stdio.h> 
int main()
{
    int n,i,s=0;
    printf("Enter any number\t");//t is used for tab spacing
    scanf("%i",&n);
    for (i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum  is %d\n",s);
    return 0;
}