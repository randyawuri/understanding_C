#include "duty.h"
#include <stdio.h>
/**
 * main - program entry point
 * Return: Always 0.
*/

int main(void)
{
    printf("Trucks Import Duty Calculator\n");

    float dol_val;
    
    printf("Enter USD value: ");
    scanf("%f", &dol_val);
    
    float ex_rate = 757.522;
    float CIF = dol_val * ex_rate;
    float duty = 0.1 * CIF;
    float cis = 0.01 * CIF;
    float sur = 0.07 * CIF;
    float etl = cis / 2;
    float vat = 0.075 * (CIF + duty + cis + sur + etl);
    float total = duty + cis + sur + etl + vat;

    truck_calc(dol_val, ex_rate, CIF, duty, cis, sur, etl, vat, total);
    return (0);
}