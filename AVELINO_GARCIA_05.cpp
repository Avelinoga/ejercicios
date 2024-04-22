#include <stdio.h>
int main(){
	int cantidad,res;
	
	printf ("Ingrese la cantidad de panes para saber cuanto se cobrara\n");
	scanf ("%d",&cantidad);
	
	res= cantidad*8;
	
	printf ("El total a cobrar es de: %dBs",res);
	return 0;
}
