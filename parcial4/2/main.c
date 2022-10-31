#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define N 5

typedef struct{
    int altura;
    int nacimiento;
    int titulos;
    bool usa_izquierda;
}tenista;

bool tiene_mas_altura(tenista t0, tenista t1){
    if(t0.altura > t1.altura){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    tenista roger_federer,serena_williams;

    roger_federer.altura = 185;
    roger_federer.nacimiento = 1981;
    roger_federer.titulos = 103;
    roger_federer.usa_izquierda = 0;

    serena_williams.altura = 175;
    serena_williams.nacimiento = 1981;
    serena_williams.titulos = 73;
    serena_williams.usa_izquierda = 0;

    if(tiene_mas_altura(roger_federer,serena_williams)){
        printf("Roger Federer tiene mas altura que Serena Williams");
    }else{
        printf("Roger Federer no tiene mas altura que Serena Williams");
    }
    return 0;
}