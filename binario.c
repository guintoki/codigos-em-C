//================================================================
// Descrição: Lê um número decimal e imprime a sua forma binária
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

// Função Main
int main() {
 int n;

	for(n = 0; n < 256; n++)
	{
		imprimeBinario(n);
		printf("\n");
	}

  
 system("pause");
}
