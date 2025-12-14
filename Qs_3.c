#include <stdio.h>

int main()
{
    int a, b;
    char *a1;
    float risk;
    printf(" System vulnerability score (1-10)");
    scanf("%d", &a);
    printf("Malware strength score (1-10)");
    scanf("%d", &b);
    risk = (a * a) + (b * b) / 20;
    a1 = ((risk > 5) ? "High_Infection_Probability" : "Low_Infection_Probability");
    printf("%s", a1);
    return 0;
}
