#include <stdio.h>
int main(void)
{
    char name [20];
    printf("Enter your name- ");
    scanf("%s", &name);
    // enter your short name



    int a, b,c;
    printf("Enter current year- ");
    scanf("%d", &c);
    //
    printf("Enter your birth year- ");
    scanf("%d", &a);

    if (a < 1996)
    {
        printf(" You are Gen X\n");
    }
    else if (a> 1996)
    {
        printf("You are Millenial\n");
    }
    else
    {
        printf(" You are Gen Z\n");
    }

    b = c-a;
    printf("Your age- %d\n", b);
    printf("Thank you, %s", name);
    
        return 0;
}
