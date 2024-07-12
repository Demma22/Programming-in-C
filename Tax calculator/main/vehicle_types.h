
#ifndef VEHICLE_TYPES_H
#define VEHICLE_TYPES_H

typedef struct {
    int type;
    float cif;
    int seating_capacity;
    float gross_weight;
    int engine_capacity;
    int age;
    int transport_mode;
    int bond_days;
} Vehicle;

void print_vehicle_info(const Vehicle *vehicle);

#endif // VEHICLE_TYPES_H
