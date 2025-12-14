#include <stdio.h>

int main()
{
    int age, balance;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your balance : ");
    scanf("%d", &balance);
    if (age < 21)
    {
        printf("Not eligible for ride (underage)");
    }
    else if (balance < 200)
    {
        printf("Not eligible (insufficient balance)");
    }
    else
    {
        printf("Eligible for ride");
    }

    return 0;
}