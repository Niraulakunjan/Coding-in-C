#include<stdio.h>
#include<conio.h>
int main()
{
    int i,s,n,on;
    printf("Enter the number\n");
    scanf("%d",&n);

    for (i=1;i<=10;i++)
    {
        printf("%d * %d =%d\n",n,i,n*i);

    }
    getch();
}

