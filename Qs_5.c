#include <stdio.h>

int main(){
    int ride_type , distance ;
    printf("Select ride type .\n1 = Economy\n2 = Business\n3 = Luxury\n");
    scanf("%d" , &ride_type);
    switch (ride_type)
    {
    case 1:
        printf("Ride type for distance .\n1 = short\n2 = longn\n");
        scanf("%d" , &distance);
        switch (distance)
        {
        case 1:
            printf("Economy\n");
            printf("Base fare = 100");
            break;
        case 2:
            printf("Economy\n");
            printf("Base fare = 300");
            break;
        
        default:
            printf("Invalid input");
            break;
        }
        break;
    case 2:
        printf("Ride type for distance .\n1 = short\n2 = longn\n");
        scanf("%d" , &distance);
        switch (distance)
        {
        case 1:
            printf("Business\n");
            printf("Base fare = 100");
            break;
        case 2:
            printf("Business\n");
            printf("Base fare = 300");
            break;
        
        default:
            printf("Invalid input");
            break;
        }
        break;
    case 3:
        printf("Ride type for distance .\n1 = short\n2 = longn\n");
        scanf("%d" , &distance);
        switch (distance)
        {
        case 1:
            printf("Luxury\n");
            printf("Base fare = 100");
            break;
        case 2:
            printf("Luxury\n");
            printf("Base fare = 300");
            break;
        
        default:
            printf("Invalid input");
            break;
        }
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
