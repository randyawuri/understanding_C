#include "duty.h"
/**
 * duty_calc - calculates duty tax on imported cars.
*/
void duty_calc(float usd_val, float ex_rate, float CIF, float duty, float levy, float cis, float sur, float etl, float vat, float total)
{
    printf("Exchange rate: %.3f\n", ex_rate);
    printf("CIF in Naira: %.2f\n", CIF);
    printf("Duty: %.2f\n", duty);
    printf("CIS: %.2f\n", cis);
    printf("Surcharge: %.2f\n", sur);
    printf("ETLS: %.2f\n", etl);
    printf("Levy: %.2f\n", levy);
    printf("VAT: %.2f\n", vat);

    printf("TOTAL: %.2f\n", total);
}
