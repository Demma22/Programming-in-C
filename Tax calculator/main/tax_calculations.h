
#ifndef TAX_CALCULATIONS_H
#define TAX_CALCULATIONS_H

#include "vehicle_types.h"

float calculate_total_taxes(const Vehicle *vehicle);
float calculate_id(float cif);
float calculate_vat(float cif);
float calculate_wht(float cif);
float calculate_il(const Vehicle *vehicle);
float calculate_sd();
float calculate_ff();
float calculate_ed();
float calculate_registration(const Vehicle *vehicle);
float calculate_transport_tolls(const Vehicle *vehicle);
float calculate_bond_storage(const Vehicle *vehicle);

#endif // TAX_CALCULATIONS_H
