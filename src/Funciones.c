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

int main() {
	//Llamada a la función
	saludar();
	printf("\nHola mundo");
	return 0;
}

/*
============================================================================
						Desarrollo o implementación
============================================================================
*/
void saludar(void)
{
	printf("Hola a todos!");
}
