#include<stdio.h>

int converterCelsiusParaFahrenheit() {

double tempC = 0 ;
double tempF = 0;

scanf("%lf", &tempC);

tempF = (tempC * 9.0/5) + 32 ;

printf("%.1lf", tempF);


return 0;
}
