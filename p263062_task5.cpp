#include <stdio.h>
int main ()
{
	float celsius = 37.5;
	double fahrenheit, kelvin;
	
	fahrenheit = (celsius * 9.0/5.0) + 32.0;
	kelvin = celsius + 273.15;
	
	printf("================ TEMPERATURE CONVERSION =================\n");
	
	printf("Temperature in Celsius: \t %.2f °C\n", celsius);
	printf("Temperature in Fahrenheit: \t %.2lf °F\n", fahrenheit);
	printf("Temperature in Kelvin: \t\t %.2lf K\n", kelvin);
	
	printf("=========================================================\n");
	
	return 0;
}
