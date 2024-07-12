#include <stdio.h>
#include "vehicle_types.h"

void print_vehicle_info(const Vehicle *vehicle) {
    const char *vehicle_types[] = {"Unknown", "Ambulance", "Estate", "Sedan", "SUV", "Trailer", "Other"};
    const char *transport_modes[] = {"Unknown", "Carrier bed", "Driven"};

    printf("Vehicle Information:\n");
    printf("Type: %s\n", vehicle_types[vehicle->type]);
    printf("CIF: %.2f\n", vehicle->cif);
    printf("Seating Capacity: %d\n", vehicle->seating_capacity);
    printf("Gross Weight: %.2f tons\n", vehicle->gross_weight);
    printf("Engine Capacity: %d CC\n", vehicle->engine_capacity);
    printf("Age: %d years\n", vehicle->age);
    printf("Mode of Transportation: %s\n", transport_modes[vehicle->transport_mode]);
    printf("Days in Bond Storage: %d\n", vehicle->bond_days);
}
