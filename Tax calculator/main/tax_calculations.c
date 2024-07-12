#include "tax_calculations.h"

float calculate_id(float cif) {
    return 0.25 * cif;
}

float calculate_vat(float cif) {
    return 0.18 * cif;
}

float calculate_wht(float cif) {
    return 0.06 * cif;
}

float calculate_il(const Vehicle *vehicle) {
    if (vehicle->type == 1 && vehicle->age > 10) {
        return 0.15 * vehicle->cif;
    } else {
        return 150000.0;
    }
}

float calculate_sd() {
    return 35000.0;
}

float calculate_ff() {
    return 20000.0;
}

float calculate_ed() {
    return 200000.0;
}

float calculate_registration(const Vehicle *vehicle) {
    if (vehicle->type == 1 || vehicle->type == 3) {
        return 700000.0;
    } else {
        return 300000.0;
    }
}

float calculate_transport_tolls(const Vehicle *vehicle) {
    if (vehicle->transport_mode == 1) {
        return 0.005 * vehicle->cif;
    } else if (vehicle->transport_mode == 2) {
        return 0.015 * vehicle->cif;
    }
    return 0;
}

float calculate_bond_storage(const Vehicle *vehicle) {
    return vehicle->bond_days * 15000.0;
}

float calculate_total_taxes(const Vehicle *vehicle) {
    float total_taxes = 0.0;

    // Apply taxes based on vehicle type and criteria
    if (vehicle->type == 1) {
        // Ambulance
        total_taxes += calculate_sd() + calculate_ff() + calculate_ed() + calculate_registration(vehicle) + calculate_il(vehicle);
    } else {
        // Standard taxes for other vehicles
        total_taxes += calculate_id(vehicle->cif) + calculate_vat(vehicle->cif) + calculate_wht(vehicle->cif) + calculate_il(vehicle);
        total_taxes += calculate_sd() + calculate_ff() + calculate_ed() + calculate_registration(vehicle);

        // Specific vehicle type conditions
        if (vehicle->type == 2) {
            // Estate
            if (vehicle->seating_capacity > 5) {
                total_taxes += 250000.0 * (vehicle->seating_capacity - 5);
            }
            if (vehicle->gross_weight >= 1500 && vehicle->gross_weight <= 2000) {
                total_taxes += 0.05 * vehicle->cif;
            } else if (vehicle->gross_weight > 2000) {
                total_taxes += 0.10 * vehicle->cif;
            } else {
                total_taxes += 0.02 * vehicle->cif;
            }
            if (vehicle->engine_capacity > 1800) {
                total_taxes += 0.05 * vehicle->cif;
            } else {
                total_taxes += 0.025 * vehicle->cif;
            }
            if (vehicle->age >= 1 && vehicle->age <= 5) {
                total_taxes += 0.01 * vehicle->cif;
            } else if (vehicle->age > 5 && vehicle->age <= 10) {
                total_taxes += 0.05 * vehicle->cif;
            } else {
                total_taxes += 0.15 * vehicle->cif;
            }
        } else if (vehicle->type == 3) {
            // Sedan
            if (vehicle->gross_weight >= 1500 && vehicle->gross_weight <= 2000) {
                total_taxes += 0.10 * vehicle->cif;
            } else if (vehicle->gross_weight > 2000) {
                total_taxes += 0.15 * vehicle->cif;
            } else {
                total_taxes += 0.02 * vehicle->cif;
            }
            if (vehicle->engine_capacity > 2000) {
                total_taxes += 0.10 * vehicle->cif;
            } else if (vehicle->engine_capacity >= 1500 && vehicle->engine_capacity <= 2000) {
                total_taxes += 0.05 * vehicle->cif;
            } else {
                total_taxes += 0.025 * vehicle->cif;
            }
            if (vehicle->age >= 1 && vehicle->age <= 5) {
                total_taxes += 0.015 * vehicle->cif;
            } else if (vehicle->age > 5 && vehicle->age <= 10) {
                total_taxes += 0.05 * vehicle->cif;
            } else if (vehicle->age > 10 && vehicle->age <= 15) {
                total_taxes += 0.10 * vehicle->cif;
            }
        } else if (vehicle->type == 4) {
            // SUV
            if (vehicle->seating_capacity > 5) {
                total_taxes += 350000.0 * (vehicle->seating_capacity - 5);
            }
            if (vehicle->gross_weight > 5000) {
                total_taxes += 0.15 * vehicle->cif;
            }
            if (vehicle->age >= 1 && vehicle->age <= 5) {
                total_taxes += 0.01 * vehicle->cif;
            } else if (vehicle->age > 5 && vehicle->age <= 10) {
                total_taxes += 0.15 * vehicle->cif;
            } else {
                total_taxes += 0.25 * vehicle->cif;
            }
        } else if (vehicle->type == 5) {
            // Trailer
            if (vehicle->gross_weight >= 15000 && vehicle->gross_weight <= 20000) {
                total_taxes += 0.15 * vehicle->cif;
            } else if (vehicle->gross_weight > 20000) {
                total_taxes += 0.25 * vehicle->cif;
            } else {
                total_taxes += 0.05 * vehicle->cif;
            }
            if (vehicle->engine_capacity > 20000) {
                total_taxes += 0.10 * vehicle->cif;
            } else if (vehicle->engine_capacity >= 15000 && vehicle->engine_capacity <= 20000) {
                total_taxes += 0.05 * vehicle->cif;
            } else {
                total_taxes += 0.025 * vehicle->cif;
            }
            if (vehicle->age >= 1 && vehicle->age <= 5) {
                total_taxes += 0.05 * vehicle->cif;
            } else if (vehicle->age > 5 && vehicle->age <= 10) {
                total_taxes += 0.10 * vehicle->cif;
            } else if (vehicle->age > 10 && vehicle->age <= 15) {
                total_taxes += 0.15 * vehicle->cif;
            }
        } else if (vehicle->type == 6) {
            // Other
            if (vehicle->gross_weight > 30000) {
                total_taxes += 0.20 * vehicle->cif;
            }
            if (vehicle->engine_capacity > 2500) {
                total_taxes += 0.10 * vehicle->cif;
            } else {
                total_taxes += 0.05 * vehicle->cif;
            }
            if (vehicle->age >= 1 && vehicle->age <= 5) {
                total_taxes += 0.02 * vehicle->cif;
            } else if (vehicle->age > 5 && vehicle->age <= 10) {
                total_taxes += 0.05 * vehicle->cif;
            } else {
                total_taxes += 0.10 * vehicle->cif;
            }
        }

        total_taxes += calculate_transport_tolls(vehicle) + calculate_bond_storage(vehicle);
    }

    return total_taxes;
}
