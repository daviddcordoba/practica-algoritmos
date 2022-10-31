#include <stdio.h>
#include <assert.h>
#define N 5


typedef struct{
    int max_par;
    int min_par;
    int sum_par;
}s_paridad_t;

int primerPar(int a[], int tam){ // esta funcion busca el primer elemento par del arreglo
    int i = 0;
    while( i < N){
        if(a[i] % 2 == 0){
            return a[i];
        }
        i++;
    }
}
s_paridad_t stats_paridad(int a[],int tam){
    s_paridad_t paridad;
    paridad.max_par = primerPar(a,N); // podria poner el 0 que es el numero par mas chico que hay? No, porque sino el 0 siempre seria el mas chico xd
    paridad.min_par = primerPar(a,N);
    paridad.sum_par = 0;

    int i = 0;
    while( i < N){
        if(a[i] % 2 == 0 && a[i] > paridad.max_par){
            paridad.max_par = a[i];
        }
        if(a[i] % 2 == 0 && a[i] < paridad.min_par){
            paridad.min_par = a[i];
        }
        paridad.sum_par += a[i];
        i++;
    }

    return paridad;

};


void llenarArreglo(int a[], int tam){
    int i = 0;
    while( i < N){
        printf("Ingrese el elemento %d del arreglo: ", i);
        scanf("%d",&a[i]);
        i++;
    }
}

int main(){
    int a[N];
    s_paridad_t res;

    llenarArreglo(a,N);

    res = stats_paridad(a,N);

    printf("El elemento par mas chico es: %d\n",res.min_par);
    printf("El elemento par mas grande es: %d\n",res.max_par);
    printf("La suma de los elementos pares es: %d\n",res.sum_par);

    return 0;
}