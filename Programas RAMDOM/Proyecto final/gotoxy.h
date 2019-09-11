/*Aporte por Learnwtutorials

Esta libreria tienes que incluirla en la carpeta de tu compilador para que puedas utilizar la funcion gotoxy

*/

#include <windows.h>

void gotoxy(int x, int y){


HANDLE manejar;

manejar= GetStdHandle(STD_OUTPUT_HANDLE);

COORD posicion;

posicion.X = x;

posicion.Y = y;

SetConsoleCursorPosition(manejar,posicion);


}

