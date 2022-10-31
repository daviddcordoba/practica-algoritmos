#include<stdio.h>
#include <assert.h>
#define N 5

int suma_multiplos( int a[], int tam, int k){
    int suma = 0;

    int i = 0;
    while( i < tam){
        if(a[i] % a[k] == 0){
            suma += a[i];
        }
        i++;
    }
    return suma;
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
    int posicion;
    int suma ;
    pedirArreglo(a,N);

    printf("Ingrese la posicion a consultar: ");
    scanf("%d",&posicion);
    while ( posicion > N && posicion < 0 )
    {   
        printf("La posicion debe ser menor a 5 y positiva: ");
        scanf("%d",&posicion);
    } 

    printf("El resultado de la suma es %d",suma_multiplos(a,N,posicion));

    return 0;
}