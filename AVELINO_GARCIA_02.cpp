#include<stdio.h>
int main(){
	int k=40,hora,res;
	printf ("Ingrese las horas para saber cuanto kilometros ha recorrido dicha ave\n");
	scanf ("%d",&hora);
	
	res=hora*k;
	
	printf ("Los kilometros recorridos por el ave son: %d",res);
	return 0;
}
