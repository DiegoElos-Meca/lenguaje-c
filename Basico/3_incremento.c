#include <conio.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 7, b;
	b = ++a+3;  // a se incrementa en 1, le sumamos 3 y reibe 11.
	b = b+a+++5;  // b recibe 11+8+5 y la a se incrementa
	printf("%d,%d\n",a,b );
	getch();
	return 0;
}