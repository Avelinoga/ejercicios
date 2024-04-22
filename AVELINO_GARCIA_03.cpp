#include<stdio.h>
int main(){
	int hora;
	float k=11.25, res;
	printf ("Ingrese las horas para saber cuanto kilometros ha recorrido el antilope\n");
	scanf ("%d",&hora);
	
	res=hora*k;
	
	printf ("Los kilometros recorridos por el antilope son: %f",res);
	return 0;
}
