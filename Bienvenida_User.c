
/*
	Doy la bienvenida al usuario. Pido el nombre y verifico si la primera letra es mayúscula, 
	si no es así, lo indicó por pantalla y vuelvo a pedir el nombre. Devuelvo la inicial.

	>>> TERMINADO <<< ERROR EN GDB COMPILER (FUNCIONA EN VS CODE) // <stdio_ext.h>
*/

#include <stdio.h>
//#include <stdio_ext.h>

char bienvenida_user (void);


int main()
{
	char nombre;
	printf("Bienvenido a mi programa...\n");
	nombre = bienvenida_user();
	return(0);
}

char bienvenida_user(void)
{
	char inicial;
	printf("Por favor, ingrese su nombre\n>>> ");
	scanf("%s", &inicial);	// %c --> %s
	if ((inicial >= 'A') && (inicial <= 'Z'))
	{
		printf("Inicial %c", inicial);
	}
	else
	{
		do
		{
			printf("Por favor ingrese la primera letra en mayuscula\n>>> ");
			//__fpurge(stdin);    // Limpia el Buffer dl teclado, es decir, borra los datos de la memoria del teclado
			scanf("%s", &inicial);	// %c --> %s
		}
		while (!((inicial >= 'A') && (inicial <= 'Z')));
		if ((inicial >= 'A') && (inicial <= 'Z'))
		{
			printf("Inicial: %c", inicial);
		}
	}
	return(inicial);
}
