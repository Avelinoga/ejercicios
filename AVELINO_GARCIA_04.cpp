#include <stdio.h>
int main() {
    int cantidadDePasteles;
    float cantidadDeHarina;

    printf("Ingrese la cantidad de pasteles a realizar: ");
    scanf("%d", &cantidadDePasteles);

    cantidadDeHarina = (cantidadDePasteles * 3) / 100.0; // Cantidad de harina por pastel

    printf("La cantidad de harina a utilizar es: %.2f kg\n", cantidadDeHarina);

    return 0;
}
