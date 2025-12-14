#include <stdio.h>

int main()
{
    int rating, distance;
    printf("Input driver rating(1-5) : ");
    scanf("%d", &rating);
    printf("Input distance : ");
    scanf("%d", &distance);
    if (rating > 0 && rating <= 5)
    {
        if (rating >= 4 && distance <= 5)
        {
            printf("Top driver nearby.\n");
        }
        else if (rating >= 3 && distance <= 10)
        {
            printf("Average driver assigned.\n");
        }
        else
        {
            printf("No suitable driver available.\n");
        }
    }
    else{
        printf("Invalid rating.\n");
    }
    return 0;
}