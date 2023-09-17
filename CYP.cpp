// CYP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
int main()
{
	int radio;
	float pi;
	float area;
	printf("Para calcular el area de un circulo el valor de pi se toma como 3.14\n");
	printf("Radio:");
	scanf_s("%i", &radio);
	pi = 3.14;
	area = pi*(radio*radio);
	printf("El area del circulo es de %.2f", area);

}