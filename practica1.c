#include <stdio.h>

int main () {
    int elementos;
    double pi=0.0;

    printf("ingrese la cantidad de elementos de la serie: ");
    scanf("%d",&elementos);

    for (int i=0; i<elementos; i++) {
        //La formula: (-1)^i / (2i+1)
        if(i%2==0){
            pi+=1.0/(2.0 * i + 1.0);
        }else {
            pi -=1.0/(2.0*i+1.0);
        }
    }
    pi *=4.0;

    printf("El valor aproximadode Pi con %d elementos es: %.15f\n",elementos,pi);

    return 0;
}