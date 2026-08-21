#include <stdio.h>
int main(){
    char municipality[50];
    char mayor[50];
    int population;

    printf("=========================================\n");
    printf("  Municipal Financial Management System  \n");
    printf("=========================================\n");
    printf("     Welcome to Windhoek Municipality    \n");

    printf("Please enter the name of the municipality: ");
    scanf("%s", municipality);

    printf("Please enter the name of the mayor: ");
    scanf("%s", mayor);

    printf("Please enter the population: ");
    scanf("%d", &population);

    printf("==========================================\n");
    printf("  Municipality Information Summary  \n");
    printf("==========================================\n");
    printf("Municipality: %s\n", municipality);
    printf("Mayor: %s\n", mayor);
    printf("Population: %d\n", population);
    printf("==========================================\n");

    return 0;
}