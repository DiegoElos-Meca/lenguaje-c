#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct{char name[20];int age;int semestre;char carrera[20];}alum;

int main()
{
	printf("teclea el nombre del alumno: ");
	gets(alum.name);
	//printf("%s",alum.name);
	printf("Teclea la edad del alumno: ");
	scanf("%d", &alum.age);
	
	printf("Teclea el semestre del alumno: ");
	scanf("%d", &alum.semestre);
	
	printf("teclea la carrera del alumno: ");
	gets(alum.carrera);
	
	getch();
	system("cls");
	
	printf("El alumno %s tiene %d anios de edad y actualmente cursa el %d semestre en la carrera de %s", alum.name, alum.age, alum.semestre, alum.carrera);
	
	getch(); return 0;
}
