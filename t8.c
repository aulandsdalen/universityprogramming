#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FAHR_TO_CELSIUS_COEFF (5.0/9.0)
#define CELSIUS_TO_FAHR_COEFF (9.0/5.0)
#define KELVIN_COEFF 273.15

float celsius_to_fahrenheit(float centigrade) {

return CELSIUS_TO_FAHR_COEFF*centigrade + 32;

}

float fahrenheit_to_celsius(float fahrenheit) {

return FAHR_TO_CELSIUS_COEFF*(fahrenheit-32);

}

float celsius_to_kelvin(float centigrade) {

return centigrade + KELVIN_COEFF;

}

float kelvin_to_celsius(float kelvin) {

if (kelvin < 0)
    return -KELVIN_COEFF;
else
    return kelvin - KELVIN_COEFF;

}

int main(int argc, char** argv)
{
    float input, centigrade_converted;
    char scale; //scale symbol
    printf("Input value and scale symbol, ie:\n20F - would be treated as 20 deg. Fahrenheit\n36.6C - would be treated as 36.6 centigrade\n");
    scanf("%f %c", &input, &scale);
    /* ***********************
     * valid input examples: *
     * 30F                   *
     * 125 c                 *
     * 900     K             *
     * ********************* */
    switch(toupper(scale)){ //toupper as we don't know if scale was hi- or lo-case
    case 'C':
        printf("%.2fC = %.2fF\n%.2fC = %.2fK\n", input, celsius_to_fahrenheit(input), input, celsius_to_kelvin(input));
        break;
    case 'F':
        centigrade_converted = fahrenheit_to_celsius(input);
        printf("%.2fF = %.2fC\n%.2fF = %.2fK", input, centigrade_converted, input, celsius_to_kelvin(centigrade_converted));
        break;
    case 'K':
        if (input < 0) {
            printf("There's no negative Kelvin scale - 0 K is absolute zero, treating input as 0 K...\n");
            input = 0;
        }
        printf("will convert %.2f kelvin to celsius and fahrenheit\n", input);
        centigrade_converted = kelvin_to_celsius(input);
        printf("%.2fK = %.2fC\n%.2fK = %.2fF\n", input, centigrade_converted, input, celsius_to_fahrenheit(centigrade_converted));
        break;
    default:
        printf("Unknown scale, valid are:\nK - Kelvin\nC - Celsius\nF - Fahrenheit\n");
    }
    return 0;
}
