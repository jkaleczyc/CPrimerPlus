/* platinum.c -- your weight in platinum */
#include <stdio.h>
int main (void)
{
    float weight;
    float value;
    
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in kilograms: ");
    
    scanf("%f", &weight);
    
    value = 1700.0 * 4.077 * weight * 2.20462262 * 14.5833;
    
    printf("Your weight in platinum is worth %.2fPLN.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}