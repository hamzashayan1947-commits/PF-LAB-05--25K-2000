#include <stdio.h>

int main()
{
    int loyalty_points, final_discount;
    printf("Enter loyalty points : ");
    scanf("%d", &loyalty_points);
    final_discount = (loyalty_points > 1000) ? 20 : 5;
    printf("%d%% discount", final_discount);

    return 0;
}