//================================================================
// Descri��o: L� um n�mero decimal e imprime a sua forma bin�ria
//================================================================

// Libs
#include <stdio.h>

void imprimeBinario(int numero)
{
	int r;
	if(numero == 1) 
	{
  		printf("%d\n", numero);
 	}
 	
  	do {
   		r = numero % 2;
   		printf("%d", r);
   		numero = numero / 2;
  	} while(numero >= 1);
}

// Fun��o Main
int main() {
 int n;

	for(n = 0; n < 256; n++)
	{
		imprimeBinario(n);
		printf("\n");
	}

  
 system("pause");
}
