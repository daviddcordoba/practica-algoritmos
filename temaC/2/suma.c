#include <stdio.h>
#include <assert.h>
#define N 5

int suma_divisibles(int a[], int tam, int d){
    int suma = 0;

    int i = 0;
    while( i < tam){
        if(a[i] % d == 0){
            suma = suma + a[i];
        }
            i++;
    }
    return suma;
}

void llenarArreglo(int a[],int tam){
    int i = 0;
    while( i < N){
        printf("Ingrese el elemento %d del arreglo: ", i);
        scanf("%d", &a[i]);
        i++;
    }
}

int main(){
    int a[N];
    int d;

    /* int i = 0;
    while( i < N){
        printf("Ingrese el elemento %d del arreglo: ", i);
        scanf("%d", &a[i]);
        i++;
    } */
    llenarArreglo(a,N);
    
    printf("Ingrese el entero para comparar: ");
    scanf("%d",&d);

    printf("El resultado de la sumatoria es: %d",suma_divisibles(a,N,d));

    return 0;
}