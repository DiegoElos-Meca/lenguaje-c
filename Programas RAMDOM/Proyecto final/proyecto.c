/*Aporte por learnwtutorials
    Programador: Yoel torres
    Codigo libre de copyright

    En el siguiente codigo les muestro una especie de proyecto final, utilizando
    todo lo que hemos aprendido del curso de programacion en C.

    No olviden suscribirse al canal si quieren seguir aprendiendo mas lenguajes de programacion.
    Saludos!..
*/

#include <stdio.h>
#include <conio.h>
#include <gotoxy.h>
#include <stdlib.h>
#include <string.h>

//Declaro variables de tipo globales
FILE * ptr;
short z,x=14,y=12,f=0,cantcompra=0;
char clientefactura[50];

//Una estructura para cada campo de la factura
struct registroVentas{

    char nombreCliente[20];
    float cantidad;
    char nombreArticulo[20];
    float precio;
   float total;
    float totalaPagar;

}factura[100];


//Esta funcion es para guardar la factura, cuando el usuario acepte la opcion
void guardarfactura(){

    //me crear un archivo .txt con nombre del cliente
    ptr=fopen(clientefactura,"a+");
    if (ptr==NULL){
            system("cls");
        printf("Error en el archivo");
        return;
    }else{


            for (f=0;f<cantcompra;f++){
            fwrite(&factura[f],sizeof(factura[f]),1,ptr);
            }






        fclose(ptr);

        system("cls");
    gotoxy(25,3);
    printf("Factura Guardada...");
    gotoxy(28,8);
    printf("Gracias por su compra!..");

    Sleep(2000);
    system("cls");
    main();


    }





}

//Esta funcion me realiza el trabajo de facturar todo, y tambien de calcular el total
void facturar(){
    short cont=1,grfactura,opcfactura,cantnom;
    float acumulador=0;

    system("cls");
    gotoxy(34,3);
    printf("Empresa YT2.0");
    gotoxy(17,7);
    fflush(stdin);
    printf("Nombre cliente: ");
   scanf("%[^\n]s",&factura[0].nombreCliente);
    gotoxy(12,10);
    printf("Cantidad ");
    gotoxy(27,10);
    printf("Articulo ");
     gotoxy(42,10);
    printf("Precio ");
    gotoxy(57,10);
    printf("Total ");

    //con esta variable estoy guardando la cantidad de caracteres que tiene el nombre del cliente, para usarlo luego en el for
    cantnom=strlen(factura[0].nombreCliente);

    //este for es para hacer una copia del nombre del cliente.
    for(z=0;z<=cantnom;z++){
        clientefactura[z]=factura[0].nombreCliente[z];

    }

    //con esta funcion concateno la copia del nombre con la sentecia 'Factura.txt'
    strcat(clientefactura,"Factura.txt");

        f=0;
        cantcompra=0;
        x=14;
        y=12;

    while(cont>=1){

            gotoxy(68,7);
        printf("            ");
        fflush(stdin);
        gotoxy(x,y);
        scanf("%f",&factura[f].cantidad);
         fflush(stdin);
          gotoxy(x+15,y);
        scanf("%[^\n]s",&factura[f].nombreArticulo);
         fflush(stdin);
          gotoxy(x+30,y);
        scanf("%f",&factura[f].precio);
         fflush(stdin);
          gotoxy(x+45,y);
          factura[f].total=factura[f].cantidad*factura[f].precio;
          printf("%.2f",factura[f].total);
        acumulador+=factura[f].total;
          gotoxy(50,7);
        fflush(stdin);
        factura[f].totalaPagar=acumulador;


       printf("Agregar mas?(1/0): ");
        scanf("%d",&cont);
        f++;
    cantcompra++;
        y+=2;


    }



    gotoxy(45,y+4);
    printf("Total a pagar: %.2f",acumulador);
    gotoxy(35,y+7);
    printf("Quieres guardar esta factura?(1/0): ");
    scanf("%d",&grfactura);


     y=12;

    if (grfactura>=1){
        guardarfactura();
    }else{
        system("cls");
         gotoxy(5,3);
        printf("Desea volver a hacer otra factura?(1/0): ");
        scanf("%d",&opcfactura);
        if (opcfactura>=1){
                system("cls");
                facturar();

            }else{
                system("cls");
                main();


            }
    }

}

//Esta funcion me permite el historial de compras de un cliente
void VerFactura(){

    short cantn,cont=0,otrocliente;
    char nom[20],nomcliente[50];

    system("cls");
    gotoxy(20,3);
    printf("Ha eligido la opcion de Ver facturas");
    gotoxy(25,7);
    printf("Digite el nombre del cliente: ");
    fflush(stdin);
    scanf("%[^\n]s",nom);

    cantn= strlen(nom);

    for (z=0;z<=cantn;z++){
        nomcliente[z]=nom[z];

    }

    strcat(nomcliente,"Factura.txt");


    ptr=fopen(nomcliente,"r");
    if (ptr==NULL){
            system("cls");
            gotoxy(15,4);
       printf("Error al leer, la factura de ese cliente no existe");
       Sleep(2000);
       system("cls");
       main();

    }else{

        system("cls");

        f=0;
        x=14;
        y=12;

         while(!feof(ptr)){

             cont= fread(&factura[f],sizeof(factura[f]),1,ptr);

             if (cont==1){


                gotoxy(20,3);
                printf("Factura del cliente: %s",nom);
                gotoxy(12,10);
                printf("Cantidad ");
                gotoxy(x,y);
                printf("%.2f",factura[f].cantidad);
                gotoxy(27,10);
                printf("Articulo ");
                gotoxy(x+15,y);
                printf("%s",factura[f].nombreArticulo);
                gotoxy(42,10);
                printf("Precio ");
                gotoxy(x+30,y);
                printf("%.2f",factura[f].precio);
                gotoxy(57,10);
                printf("Total ");
                gotoxy(x+45,y);
                printf("%.2f",factura[f].total);
                f++;
                y+=2;
             }




    }



        fclose(ptr);

        gotoxy(45,7);
        fflush(stdin);
       printf("Ver otro cliente?(1/0): ");
        scanf("%d",&otrocliente);

            if (otrocliente>=1){

                system("cls");
                VerFactura();

            }else{

                system("cls");
                main();

            }



    }






}

//Esta funcion me elimina el archivo de un cliente con solo digitar su nombre
void BorrarFactura(){


    char borrarfac[20],borrardir[10]="erase \\ ";

system("cls");

gotoxy(2,7);
printf("Digite el cliente que desea eliminar: ");
fflush(stdin);
scanf("%[^\n]s",&borrarfac);

strcat(borrardir,borrarfac);
strcat(borrardir,"Factura.txt");



    gotoxy(14,10);
if (system(borrardir)==NULL){
        system("cls");
        gotoxy(15,10);
        printf("Se ha eliminado la factura o ya no existia...");
        Sleep(2000);
        system("cls");
        main();

    }else{

        system("cls");
        gotoxy(15,10);
        printf("No se ha eliminado la factura o no existia...");
        Sleep(2000);
        system("cls");
        main();

        }


    }

//Una funcion simple que me hace salir
void salir(){
    system("cls");
    gotoxy(20,8);
    printf("Ha eligido salir del programa, Adios!..");


}

//Nuestra funcion principal main, donde se encuentra lo principal de nuestro programa
main(){

short opciones;

system("color 0a");



gotoxy(20,3);
printf("Bienvenidos al sistema de ventas2.0!");
gotoxy(20,7);
printf("1- Facturar");
gotoxy(20,9);
printf("2- Ver factura");
gotoxy(20,11);
printf("3- Borrar factura");
gotoxy(20,13);
printf("4- Salir");
gotoxy(20,15);
printf("Elija una opcion: ");
scanf("%d",&opciones);

switch(opciones){

case 1: facturar(); break;
case 2: VerFactura(); break;
case 3 : BorrarFactura(); break;
default: salir();

}



getch();
}
