#include "duty.h"
/**
 * truck_calc - Calculates tax for imported trucks.
*/
void truck_calc(float dol_val, float ex_rate, float CIF, float duty, float cis, float sur, float etl,float vat, float total)
{
    printf("Exchange rate: %.3f\n", ex_rate);
    printf("CIF in Naira: %.2f\n", CIF);
    printf("Duty: %.2f\n", duty);
    printf("CIS: %.2f\n", cis);
    printf("Surcharge: %.2f\n", sur);
    printf("ETLS: %.2f\n", etl);
    printf("VAT: %.2f\n", vat);

    printf("TOTAL: %.2f\n", total);
}
