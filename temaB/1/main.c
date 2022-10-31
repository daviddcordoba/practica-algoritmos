#include<stdio.h>
#include <assert.h>

int main(){
    int r,s;
    int rInput,sInput;
    int e1,e2;

    printf("Ingrese un valor para r: ");
    scanf("%d",&rInput);
    
    printf("Ingrese un valor para s: ");
    scanf("%d",&sInput);

    r = rInput;
    s = sInput;

    assert( r == rInput && s == sInput && sInput > rInput && "s debe ser mayor que r");

    e1 = (2 * r) - (2 * s); //2*1 -2*2 //2-4// -2
    e2 = (2 * r) + s; // 2*1 + 2

    assert( (e1 == (2 * rInput) - (2 * sInput)) && (e2 == (2 * rInput) + sInput ) );

    printf("Estado final de r: %d\n", e1);
    printf("Estado final de s: %d", e2);

    return 0;
}