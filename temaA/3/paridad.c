#include <stdio.h>
#include <assert.h>
#define N 5

typedef struct  {
    int n_pares;
    int n_impares;
} paridad_t; // esto para evitar escribir 'struct' cada vez que quiero usarlo


// por ejemplo aca deberia haber sido 'struct paridad_t contar_paridad' pero por el typedef me permite obviar el 'struct'
paridad_t contar_paridad(int a[], int tam){

    paridad_t counter;
    counter.n_pares = 0;
    counter.n_impares = 0;

    int i = 0;
    while( i < tam ){
        if( a[i]%2 == 0){
            counter.n_pares++;
        }else{
            counter.n_impares++;
        }
        i++;
    }

    return counter;
};

int main(){
    int a[N];

    int i = 0;
    while( i < N ){
        printf("Ingrese el elemento %d del arreglo: ", i+1);
        scanf("%d",&a[i]);
        i++;
    }

    paridad_t counter;
    counter = contar_paridad(a, N);

    printf("La cantidad de elementos pares es %d\n", counter.n_pares);
    printf("La cantidad de elementos impares es %d", counter.n_impares);


    return 0;
}