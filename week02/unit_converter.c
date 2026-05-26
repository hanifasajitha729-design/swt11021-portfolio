#include <stdio.h>

int main(void) {

    const double KM_TO_MILES = 0.621371;
    const double KM_TO_METRES = 1000.0;
    const double KM_TO_CM = 100000.0;

    double km, miles, metres, cm;
    double celsius, fahrenheit, kelvin;

    printf("Enter distance in kilometres : ");
    scanf("%lf", &km);

    miles = km * KM_TO_MILES;
    metres = km * KM_TO_METRES;
    cm = km * KM_TO_CM;

    printf("\nDistance Conversions\n");
    printf("Miles : %.2lf\n", miles);
    printf("Metres : %.2lf\n", metres);
    printf("Centimetres : %.2lf\n", cm);

    printf("\nEnter temperature in Celsius : ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    printf("\nTemperature Conversions\n");
    printf("Fahrenheit : %.2lf\n", fahrenheit);
    printf("Kelvin : %.2lf\n", kelvin);

    return 0;
}