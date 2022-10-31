#include<stdio.h>
#include <assert.h>
#define N 5

/* ------------------------------------Estructuras----------------------------------------------*/
typedef struct {
    int dni;
    float altura;
}persona_t;

typedef struct{
    float altura_media;
    float altura_minima;
    float altura_maxima;
}stats_t;

/* ---------------------------------------------------------------------------------------------*/

/* ----------------------------------------Funciones----------------------------------------------*/
stats_t calcular_estadisticas( persona_t a[], int tam){
    
    stats_t res;
    res.altura_maxima = a[0].altura;
    res.altura_minima = a[0].altura;
    res.altura_media = a[0].altura;
    
    int i = 1;
    while( i < N){
        if(a[i].altura > res.altura_maxima){
            res.altura_maxima = a[i].altura;
        }
        if(a[i].altura < res.altura_minima){
            res.altura_minima = a[i].altura;
        }
        res.altura_media += a[i].altura;
        i++;
    }
        res.altura_media = res.altura_media/tam;

        return res;
}
/* ---------------------------------------------------------------------------------------------*/

int main(){
    persona_t a[N];
    int i = 0;
    while( i < N){
        printf("Ingrese el DNI: ");
        scanf("%d",&a[i].dni);
        printf("Ingrese la altura: ");
        scanf("%f",&a[i].altura);
        i++;
    }
    
    stats_t stats;
    stats = calcular_estadisticas(a,N);

    printf("Altura media:%f\n",stats.altura_media);
    printf("Altura minima:%f\n",stats.altura_minima);
    printf("Altura maxima:%f\n",stats.altura_maxima);

    return 0;
}