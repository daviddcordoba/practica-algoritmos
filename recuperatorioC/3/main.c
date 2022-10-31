#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define N 5


/* -------------------------------Estructura-------------------------- */

typedef struct{
    int suma_pares;
    int suma_impares;
    int suma_total;
}s_suma_t;
/* -------------------------------------------------------------------- */

/* -------------------------------Funciones-------------------------- */

s_suma_t sumas(int a[],int tam){

    s_suma_t res_sumas;
    res_sumas.suma_pares = 0;
    res_sumas.suma_impares = 0;
    res_sumas.suma_total = 0;

    int i = 0;
    while( i < N){
        if(a[i] % 2 == 0){
            res_sumas.suma_pares += a[i];
        }else{
            res_sumas.suma_impares += a[i];
        }
        res_sumas.suma_total += a[i];
        i++;
    }
    return res_sumas;
}

void pedirArreglo(int a[],int tam){
    int i = 0;
    while(i<tam){
        printf("Ingrese el elemento %d del arreglo: ",i);
        scanf("%d",&a[i]);
        i++;
    }
}
/* -------------------------------------------------------------------- */

int main(){

    int a[N];
    s_suma_t res;

    pedirArreglo(a,N);

    res = sumas(a,N);

    printf("La suma de los pares es: %d\n",res.suma_pares);
    printf("La suma de los impares es: %d\n",res.suma_impares);
    printf("La suma total es: %d",res.suma_total);

    return 0;
}