#include <stdio.h>
#include <math.h>

int main()
{
    int loyalty_points, final_discount;
    int distance, ride_type, no_of_rides, base_fare = 0;
    int age, balance;
    int rating, distance2;
    float surge_multiplier, total_fare = 0;

    printf("Enter no of rides requested : ");
    scanf("%d", &no_of_rides);
    printf("Enter distance(km) : ");
    scanf("%d", &distance);

    printf("Enter loyalty points : ");
    scanf("%d", &loyalty_points);
    final_discount = (loyalty_points > 1000) ? 20 : 5;

    printf("Input driver rating(1-5) : ");
    scanf("%d", &rating);
    printf("Input distance (how far is driver from you(km) ) : ");
    scanf("%d", &distance2);

    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your balance : ");
    scanf("%d", &balance);

    surge_multiplier = sqrt(no_of_rides) / 2;
    if (surge_multiplier > 3)
    {
        surge_multiplier = 3;
    }

    printf("Select ride type .\n1 = Economy\n2 = Business\n3 = Luxury\n");
    scanf("%d", &ride_type);
    switch (ride_type)
    {
    case 1:
        base_fare = 50;
        total_fare = base_fare * distance * surge_multiplier;
        break;
    case 2:
        base_fare = 100;
        total_fare = base_fare * distance * surge_multiplier;
        break;
    case 3:
        base_fare = 200;
        total_fare = base_fare * distance * surge_multiplier;
        break;

    default:
        printf("Invalid input\n");
        break;
    }

    if (age < 21)
    {
        printf("Not eligible for ride (underage)\n");
    }
    else if (balance < 200)
    {
        printf("Not eligible (insufficient balance)\n");
    }
    else
    {
        printf("Eligible for ride\n");
    }

    if (rating > 0 && rating <= 5)
    {
        if (rating >= 4 && distance2 <= 5)
        {
            printf("Top driver nearby.\n");
        }
        else if (rating >= 3 && distance2 <= 10)
        {
            printf("Average driver assigned.\n");
        }
        else
        {
            printf("No suitable driver available.\n");
        }
    }
    else
    {
        printf("Invalid rating.\n");
    }

    printf("Final surge multiplier = %.2f\n", surge_multiplier);
    printf("%d%% discount\n", final_discount);
    printf("Total fare = %.2f\n", total_fare);
    return 0;
}