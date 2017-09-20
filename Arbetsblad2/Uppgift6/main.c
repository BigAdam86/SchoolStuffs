/*
Uppgift 6.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float convert_to_fahrenheit(const float * dC) {					//, const float *dF
	
	dF = ((9/5) * *dC) + 32;

	return dF;
}


int main() 
{
	float * Celsius = 50;
	float * Fahrenheit = convert_to_fahrenheit(*Celsius);
	printf("%f\n", *Fahrenheit);
	return 0;
}





/*
//			Haitams
//---------------------------
typedef float flyt;


flyt FahrToCell(flyt temp) {


	flyt celsius = (5.0 / 9.0) * (temp - 32);

	return celsius;
}

int main()
{
	flyt temprature = 20;
	temprature = FahrToCell(temprature);
	printf("%.1f", temprature);
	return 0;
}
*/