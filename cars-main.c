#include "duty.h"
#include <stdio.h>
/**
 * main - program entry point
 * Return: Always 0.
*/

int main(void)
{
    printf("Cars Import Duty Calculator\n");

    float usd_val;
    
    printf("Enter USD value: ");
    scanf("%f", &usd_val);
    
    float ex_rate = 757.522;
    float CIF = usd_val * ex_rate;
    float duty = 0.2 * CIF;
    float levy = 0.2 * CIF;
    float cis = 0.01 * CIF;
    float sur = 0.07 * CIF;
    float etl = cis / 2;
    float vat = 0.075 * (CIF + duty + cis + sur + etl);
    float total = duty + levy + cis + sur + etl + vat;

    duty_calc(usd_val, ex_rate, CIF, duty, levy, cis, sur, etl, vat, total);
    return (0);
}