#include <conio.h>
#include <stdio.h>
#include<string.h>

struct usuarios
{
	char name[15];
	char lastname[15];
	int age;
}user1,user2;

int main()
{
	printf("nombre de usuario: ");
	gets(user1.name);
	printf("Apellido del usuario: ");
	gets(user1.lastname);
	printf("Edad del usuario: ");
	scanf("%d",&user1.age);
	
	getch();
	
	printf("\nnombre de usuario: ");
	gets(user2.name);
	printf("Apellido del usuario: ");
	gets(user2.lastname);
	printf("Edad del usuario: ");
	scanf("%d",&user2.age);
		
	getch();
	return 0;
}
