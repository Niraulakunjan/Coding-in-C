#include<stdio.h>N
int swap(int *x ,int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
return 1;
}
int main()
{
    int a,b;
    printf("Enter the First Number: \t");
    scanf("%d", &a);
    printf("Enter the Second Number:\t");
    scanf("%d", &b);
    printf("The value you input of A=%d\n and B=%d\n", a,b);
    swap( &a, &b);
    printf("Now the Swap value of A=%d\n and B=%d\n", a,b);
    return 0;
}
