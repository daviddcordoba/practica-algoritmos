#include<stdio.h>
#include <assert.h>
#define N 5

int suma_mayores(int a[], int tam, int k){
    int i = 0;
    int suma = 0;
    while( i < tam ){
        if(a[i] > a[k]){
            suma += a[i];
        }
        i++;
    }
    return suma;
}

int main(){
    int k;
    int a[N];

    printf("Ingrese el indice k: ");
    scanf("%d",&k);
    /* Precondicion */
    assert( k >= 0 && k < N);

    int i = 0;
    while( i < N ){
        printf("Ingrese el elemento %d del arreglo: ", i);
        scanf("%d",&a[i]);
        i++;
    }


    printf("El resultado es: %d", suma_mayores(a,N,k));
    return 0;
}