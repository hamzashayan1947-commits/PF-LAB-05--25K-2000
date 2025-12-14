#include <stdio.h>
#include <math.h>

int main()
{
    int distance, ride_type, no_of_rides , base_fare = 0 ;
    float surge_multiplier , total_fare = 0;
    printf("Enter no of rides requested : ");
    scanf("%d", &no_of_rides);
    printf("Enter distance(km) : ");
    scanf("%d", &distance);
    
    
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
        total_fare = base_fare*distance*surge_multiplier;
        break;
        case 2:
        base_fare = 100;
        total_fare = base_fare*distance*surge_multiplier;
        break;
        case 3:
        base_fare = 200;
        total_fare = base_fare*distance*surge_multiplier;
        break;

    default:
        printf("Invalid input.\n");
        break;
    }

    printf("Final surge multiplier = %.2f\n", surge_multiplier);
    printf("Total fare = %.2f\n" , total_fare);
    return 0;
}

