#include<stdio.h>
int sum(int n)
{
  if (n<=0)
  {
    return 0;
  }  
  else{
    return (n+sum(n-1));
  }

}
int main()
{
    int n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    s = sum(n);
    printf("The sum of %d is %d", n,s);

}