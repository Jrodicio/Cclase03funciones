/*
 ============================================================================
 Name        : Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

#include <stdio.h>

/*
============================================================================
						Declaracion o prototipo
============================================================================
tipoRetorna nombreFuncion(listaParametros);
tipoRetorn = int float char double void
listaParametros = int float char arrays
============================================================================
*/

void saludar(void);
int getInt(char mensaje[], char mensajeError[], int minimo, int maximo);

int main() {

	int edad;
	int legajo;
	int nota;

	//Llamada a la función
	saludar();
	edad = getInt("Ingrese su edad: ","Edad inválida. Reingrese su edad: ",1,18);
	legajo = getInt("Ingrese su legajo: ","Legajo inválido. Reingrese su legajo: ",100,200);
	nota = getInt("Ingrese su nota: ","Nota inválida. Reingrese su nota: ",0,100);

	return 0;
}

/*
============================================================================
						Desarrollo o implementación
============================================================================
*/
void saludar(void)
{
	printf("Hola!\n");
}

int getInt(char mensaje[], char mensajeError[], int minimo, int maximo)
{
	int valor;

	printf("\n%s",mensaje);
	scanf("%d", &valor);

	while(valor < minimo || valor > maximo){
		printf("\n%s",mensajeError);
		scanf("%d", &valor);
	}

	return valor;
}



