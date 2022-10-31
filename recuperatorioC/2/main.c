#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define N 5

bool todos_multiplos(int a[], int tam, int k){
    int i = 0;

    while( i < tam){
        if(a[i] % a[k] != 0){
            return 0;
        }
        i++;
    }
    return 1;
}

void pedirArreglo(int a[],int tam){
    int i =0;
    while(i<tam){
        printf("Ingrese el %d elemento del arreglo: ",i);
        scanf("%d",&a[i]);
        i++;
    }
}

int main(){
    int a[N];
    int posicion;

    pedirArreglo(a,N);

    printf("Ingrese la posicion a consultar: ");
    scanf("%d",&posicion);
    assert( posicion >= 0 && posicion < N && a[posicion] !=0);

    if(todos_multiplos(a,N,posicion)){
        printf("Todos son multiplos de %d",a[posicion]);
    }else{
        printf("No todos son multiplos de %d",a[posicion]);
    }

    return 0;
}