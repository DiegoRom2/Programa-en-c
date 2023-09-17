// CYP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
int main()
{
	int lado1;
	int lado2;
	int area;
	printf("Para calcular el area de un cuadrado los lados tienen que ser iguales\n");
	printf("Lado1:");
	scanf_s("%i", &lado1);
	printf("Lado2:");
	scanf_s("%i", &lado2);
	area = lado1 * lado2;
	printf("El area del cuadrado es de %i", area);

}