#include <stdio.h>

int calculator()
{
    int a, b, c, ch;
    
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
while (1) {
    printf("chose any number for calculation");
        printf("\n1. Sum");
        printf("\n2. Difference");
        printf("\n3. Product");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            c = a + b;
            printf("\nThe sum of the two numbers is: %d\n", c);
            break;
        case 2:
            c = a - b;
            printf("\nThe difference of the two numbers is: %d\n", c);
            break;
        case 3:
            c = a * b;
            printf("\nThe product of the two numbers is: %d\n", c);
            break;
        case 4:
            if (b != 0) {
                c = a / b;
                printf("\nThe division of the two numbers is: %d\n", c);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            return 0; 
        default:
            printf("\nPlease choose between 1 to 5.\n");
            break;
        }
    }

    return 0;
}

int main() {
    calculator();
    return 0;
}
