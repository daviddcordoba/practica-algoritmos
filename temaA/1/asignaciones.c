#include<stdio.h>
#include <assert.h>
/* #include<stdbool.h> */


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

    /* Precondicion */
    assert( (r == rInput) && (s == sInput) && (sInput > rInput));

    e1 = s - r;
    e2 = r + s;
    /* Postcondicion */
    assert( (e1 == (sInput - rInput)) && ( e2 == (rInput + sInput)));

    printf("El valor final de r es %d\n",e1);
    printf("El valor final de s es %d",e2);


    return 0;
}

/* 
r = 1
s = 2

e1 = 2 - 1
e2 = 1 + 2


r = e1 = 1
s = e2 = 3
 */