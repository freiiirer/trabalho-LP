#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "problema1/problema1.h"
typedef void(*Problema)(void);

int main(void) {
	setlocale(LC_ALL,"");
	do
	{
		int opc = 0;
		puts("Escolha um programa: ");
		puts("1-> Problema 1");
		puts("2-> Problema 2");
		scanf("%d",&opc);

		Problema problema[] =
		{
				&problema1
		};

		switch(opc)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				problema[opc -1]();
				continue;
		}
	}while(1);

	return EXIT_SUCCESS;
}
