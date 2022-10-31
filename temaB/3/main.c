#include <stdio.h>
#define N 5

typedef struct{
    int n_multiplos_dos;
    int n_multiplos_tres;
}cantidad_t;

cantidad_t contar_multiplos(int a[],int tam){

    cantidad_t contador;
    contador.n_multiplos_dos = 0;
    contador.n_multiplos_tres = 0;

    int i =0;
    while ( i < tam )
    {
        if(a[i]%2==0){
            contador.n_multiplos_dos++;
        }
        if(a[i]%3==0){
            contador.n_multiplos_tres++;
        }
        i++;
    }
    return contador;
}

void pedirArreglo(int a[],int tam){
    int i = 0;
    while(i<tam){
        printf("Ingrese el valor %d del arreglo: ",i);
        scanf("%d",&a[i]);
        i++;
    }
}

int main(){
    int a[N];
    cantidad_t res;

    pedirArreglo(a,N);

    res = contar_multiplos(a,N);

    printf("La cantidad de multiplos de dos es: %d\n", res.n_multiplos_dos);
    printf("La cantidad de multiplos de tres es: %d", res.n_multiplos_tres);

    return 0;
}