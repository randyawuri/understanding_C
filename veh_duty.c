#include <stdio.h>

void duty_calc(float cif, float duty, float levy, float cis, float sur, float etl, float vat, float total);

int main(void)
{
    float cif;
    
    printf("Enter C.I.F: ");
    scanf("%f", &cif);
    
    float duty = 0.2 * cif;
    float levy = 0.2 * cif;
    float cis = 0.01 * cif;
    float sur = 0.07 * cif;
    float etl = cis / 2;
    float vat = 0.075 * (cif + duty + cis + sur + etl);
    float total = duty + levy + cis + sur + etl + vat;
    
    duty_calc(cif, duty, levy, cis, sur, etl, vat, total);
    
    return 0;
}

void duty_calc(float cif, float duty, float levy, float cis, float sur, float etl, float vat, float total)
{
    printf("Duty: %.2f\n", duty);
    printf("CIS: %.2f\n", cis);
    printf("Surcharge: %.2f\n", sur);
    printf("ETLS: %.2f\n", etl);
    printf("Levy: %.2f\n", levy);
    printf("VAT: %.2f\n", vat);

    printf("TOTAL: %.2f\n", total);
}