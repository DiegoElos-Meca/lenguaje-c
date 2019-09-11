/*
	Name: FuncionesVoid_04.c
	Author: Diego Manuel Elos González
	Date: 01/07/18 14:18
	Description: Programa para calcular la Hipotenusa, el Area y el Tercer ángulo de un triangulo.
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

// prototipos de las funciones que están abajo de la funcion principal
void hipotenusa();
void area();
void angulo();
// funcion principal
int main()
{
	char opcion; // elegir una de las tres opciones
	printf("Dime la opcion:\n\n a) Hipotenusa de triangulo\n b) Area de triangulo\n c) Tercer angulo de triangulo\n");
	scanf("%c",&opcion);
	switch (opcion)
	{
		case 'a': hipotenusa();break; // llamar funcion donde se saca la hipotanusa
		case 'b': area();break; // llamar funcion donde se calculará el area 
		case 'c': angulo();break; // lamar funcion que calcula el ángulo	
		default: printf("\a Letra incorrecta!!!");break;		
	}
	getch();return 0;
}
// funcion para calcular la hipotenusa de un triangulo
void hipotenusa()
{
	int co, ca; // cateto_Opuesto, cateto_Adyacente;
	float hip=0;// hipotenusa;
	printf("Escriba la longitud de los catetos al angulo\n");
	scanf("%d %d",&ca, &co); 
	hip = sqrt(ca*ca + co*co); // pitagoras.
	printf("\aLa hipotenusa del triangulo mide: %.2f",hip);
}
// funcion para calcular el area de un triangulo 
void area()
{
	int b,h; // base, altura;
	float a; // area;
	printf("Dime la base y la altura:\n");
	scanf("%d %d", &b, &h);
	a = b * h / 2; // area es igal a base por altura entre dos
	printf("\aEl area del triangulo es: %.2f",a);
	getch();
}
// funcion para calcular el tercer angulo de un triangulo 
void angulo()
{
	float a1, a2, a3; // angulo_1, angulo_2, angulo_3;
	printf("Escriba el valor de los dos angulos:\n");
	scanf("%f %f", &a1, &a2);
	a3 = 180 - (a1+a2);//  180° = a1 + a2 + a3 
	printf("\aEl tercer angulo del triangulo es: %.2f",a3);
	getch();
}