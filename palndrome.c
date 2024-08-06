#include<stdio.h>
int main()
{
    int Num,GNum,Rnum=0,R;
    printf("Enter a number:\t");
    scanf("%i",&Num);
    GNum=Num;
    while(Num !=0)
    {
        R=Num%10;
        Rnum=Rnum*10+R;
        Num /=10;
    }
    if(GNum==Rnum)
    { printf("It is a palindrome.\n");}
    else
    {
          printf("It is not a palindrome.\n");
    }
    return 0;
}