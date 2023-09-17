// CYP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
int main()
{
	int base;
	int altura;
	int area;
	printf("Para calcular el area de un rectangulo los lados tienen que ser diferentes\n");
	printf("Base:");
	scanf_s("%i", &base);
	printf("Altura:");
	scanf_s("%i", &altura);
	area = base * altura;
	printf("El area del rectangulo es de %i", area);

}