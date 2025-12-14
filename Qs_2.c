#include <stdio.h>
int main()
{
    int a, b;
    printf("Phishing alert categorization. \n ");
    printf("Input email type (1,2,3): ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Ask user action .\n1 = Clicked\n 2 = Ignored\n 3 = Reported.\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("Fake login page.\n");
            printf("High Risk.");
            break;
        case 2:
            printf("Fake login page.\n");
            printf("Medium Risk.");
            break;
        case 3:
            printf("Fake login page.\n");
            printf("Low Risk.");
            break;
        default:
            printf("Invalid Input.");
            break;
        }
        break;
    case 2:
        printf("Ask user action .\n1 = Clicked\n 2 = Ignored\n 3 = Reported.\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("Malicious Link.\n");
            printf("High Risk.");
            break;
        case 2:
            printf("Malicious Link.\n");
            printf("Medium Risk.");
            break;
        case 3:
            printf("Malicious Link.\n");
            printf("Low Risk.");
            break;
        default:
            printf("Invalid Input.");
            break;
        }
        break;
    case 3:
        printf("Ask user action .\n1 = Clicked\n 2 = Ignored\n 3 = Reported. \n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("Urgent Money Request. \n");
            printf("High Risk.");
            break;
        case 2:
            printf("Urgent Money Request.\n");
            printf("Medium Risk.");
            break;
        case 3:
            printf("Urgent Money Request.\n");
            printf("Low Risk.");
            break;
        default:
            printf("Invalid Input.");
            break;
        }
        break;

    default:
        printf("Invalid Input.");
        break;
        return 0;
    }
}