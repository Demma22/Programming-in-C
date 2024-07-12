#include <stdio.h>
#include "vehicle_types.h"
#include "tax_calculations.h"

int main() {
    Vehicle vehicle;

    // Gather vehicle details from the user
    printf("Enter vehicle type (1-Ambulance, 2-Estate, 3-Sedan, 4-SUV, 5-Trailer, 6-Other): ");
    scanf("%d", &vehicle.type);
    printf("Enter CIF value: ");
    scanf("%f", &vehicle.cif);
    printf("Enter seating capacity: ");
    scanf("%d", &vehicle.seating_capacity);
    printf("Enter gross weight (in tons): ");
    scanf("%f", &vehicle.gross_weight);
    printf("Enter engine capacity (in CC): ");
    scanf("%d", &vehicle.engine_capacity);
    printf("Enter age of the car (in years): ");
    scanf("%d", &vehicle.age);
    printf("Enter mode of transportation (1-Carrier bed, 2-Driven): ");
    scanf("%d", &vehicle.transport_mode);
    printf("Enter number of days in bond storage: ");
    scanf("%d", &vehicle.bond_days);

    // Calculate total taxes
    float total_taxes = calculate_total_taxes(&vehicle);
    print_vehicle_info(&vehicle);
    printf("Total Taxes Payable: %.2f UGX\n", total_taxes);

    return 0;
}
