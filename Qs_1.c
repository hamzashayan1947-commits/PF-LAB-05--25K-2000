#include <stdio.h>

int main()
{
    int attempts, time;
    printf("Brute-force attack detection System .\n");
    printf("Enter number of Login inputs : ");
    scanf("%d", &attempts);
    printf("Enter time interval (min) : ");
    scanf("%d", &time);
    if (attempts > 5 && time < 10)
    {
        printf("Brute-Force Attack.");
    }
    else if (attempts > 3 && time < 30)
    {
        printf("Suspicious Activity.");
    }
    else
    {
        printf("Normal Login Behavior.");
    }
    return 0;
}

