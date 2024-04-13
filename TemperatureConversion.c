#include <stdio.h>

double Fahrenheit_to_Celsius(double fehrenheit)
{
	double conv;
	
	conv = (fehrenheit - 32) * (5.0/9.0); 
    
    return conv;
}

double Celsius_to_Fahrenheit(double celsius)
{
	double conv;
	
	conv = (celsius * (9.0/5.0)) + 32; 
    
    return conv;
}

int main(void)
{
    double fah, cel, temp;
	char option;
	
	printf("Enter the conversion option. \n");
	printf("1. Fahrenheit to Celsius\n");
	printf("2. Celsius to Fahrenheit\n\n");
	printf("option: ");
	scanf(" %c", &option);
	
	switch(option)
	{
		case '1':
		printf("Enter the temperature : ");
		scanf(" %lf", &fah);
		
		temp = Fahrenheit_to_Celsius(fah);
		
		printf("Temperature in Celsius is = %.2lf %cC", temp, 248);
		break;
		
		case '2':
		printf("Enter the temperature : ");
		scanf(" %lf", &cel);
		
		temp = Celsius_to_Fahrenheit(cel);
		
		printf("Temperature in Fahrenheit is = %.2lf %cF", temp, 248);
		break;
		
		default:
		printf("Invalid Input.");
	}
	
    return 0;
}