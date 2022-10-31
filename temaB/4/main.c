#include<stdio.h>
#include <assert.h>
#define N 5

typedef struct{
    int codigo;
    int cantidad;
}producto_t;

typedef struct{
    int cantidad_media;
    int cantidad_minima;
    int cantidad_maxima;
}stats_t;

stats_t calcular_estadisticas(producto_t a[], int tam){

    stats_t cant;
    cant.cantidad_maxima = a[0].cantidad;
    cant.cantidad_minima = a[0].cantidad;
    cant.cantidad_media = a[0].cantidad;

    int i = 1;
    while( i < tam){
        if(a[i].cantidad > cant.cantidad_maxima){
            cant.cantidad_maxima = a[i].cantidad;
        }
        if(a[i].cantidad < cant.cantidad_minima){
            cant.cantidad_minima = a[i].cantidad;
        }
        cant.cantidad_media += a[i].cantidad;
        i++;
    }
    cant.cantidad_media = cant.cantidad_media/tam;

    return cant;
}

void pedirArreglo(producto_t a[],int tam){
    int i = 0;
    while(i<tam){
        printf("Ingrese la cantidad %d del producto: ",i);
        scanf("%d",&a[i].cantidad);
        printf("Ingrese el codigo %d del producto: ",i);
        scanf("%d",&a[i].codigo);
        i++;
    }
}

int main(){
    
    producto_t a[N];
    stats_t estadisticas;

    pedirArreglo(a,N);

    estadisticas = calcular_estadisticas(a,N);

    printf("La cantidad minima es: %d\n",estadisticas.cantidad_minima);
    printf("La cantidad maxima es: %d\n",estadisticas.cantidad_maxima);
    printf("La cantidad media es: %d",estadisticas.cantidad_media);

    return 0;
}






























/* struct persona_t{
    int dni;
    float altura;
};

struct paridad_t{
    float altura_media;
    float altura_minima;
    float altura_maxima;
};

struct paridad_t calcular_estadistica(struct persona_t a[], int tam){
    assert( tam == N);
    struct paridad_t respuesta;
    respuesta.altura_media = a[0].altura;
    respuesta.altura_minima = a[0].altura;
    respuesta.altura_maxima = a[0].altura;

    int i = 1;
    while( i < tam){
        if(a[i].altura > respuesta.altura_maxima){
            respuesta.altura_maxima = a[i].altura;
        }
        if(a[i].altura < respuesta.altura_minima){
            respuesta.altura_minima = a[i].altura;
        }

        respuesta.altura_media = respuesta.altura_media + a[i].altura;
        i++;
    }

    respuesta.altura_media = respuesta.altura_media / tam;

    return respuesta;

}

int main(){


    struct persona_t persona[N]; 
    int i = 0;

    while( i < N){
        scanf("%d %f",&persona[i].dni,&persona[i].altura);
        i++;
    }
    i = 0;
    while( i < N){
        printf("%d %f\n",&persona[i].dni,&persona[i].altura);
        i++;
    }

    struct paridad_t res;
    res = calcular_estadistica(persona, N);

    printf("Altura media:%f\n",res.altura_media);
    printf("Altura minima:%f\n",res.altura_minima);
    printf("Altura maxima:%f\n",res.altura_maxima);
    
    return 0;
} */