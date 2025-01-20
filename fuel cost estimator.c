#include <stdio.h>

float calculatefuelcost(float distance, float fuelaverage, float fuelprice) {
   
    float fuelNeeded = distance / fuelaverage;
    
    float totalCost = fuelNeeded * fuelprice;
    
    return totalCost;
}

int main() {
    float distance, fuelaverage, fuelprice;

    printf("Enter the total trip distance in kilometers: ");
    scanf("%f", &distance);

    printf("Enter the vehicle's fuel consumption (km/liter): ");
    scanf("%f", &fuelaverage);

    printf("Enter the current fuel price (per liter): ");
    scanf("%f", &fuelprice);

    float totalCost = calculatefuelcost(distance, fuelaverage, fuelprice);

    printf("The total fuel cost for the trip is: %.2f PKR\n", totalCost);

    return 0;
}

