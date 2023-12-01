/*student ID: IT23234420
  lab: F305
  Machine number: F305-29
  Group: 9.1 weekday*/

//conversiom of temperature from Farenheit to Kelvin

#include <stdio.h>

int main()
{
	//Declare variables to store temperatures in fahrenheit and kelvin
	float fahrenheitTemp, kelvinTemp;
	
	//Ask user for input: Temperature in fahrenheit
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &fahrenheitTemp);
	
	//Converting fahrenheit to kelvin using formula
	kelvinTemp = (fahrenheitTemp - 32) * 5/ 9.0 + 273.15;
	
	//Display the temperature in kelvin
	printf("Temperature in Kelvin is %.2f ", kelvinTemp);
	
		
	return 0;	
}
//end of program








