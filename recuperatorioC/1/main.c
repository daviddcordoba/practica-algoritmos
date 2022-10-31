#include<stdio.h>
#include <assert.h>

int main(){
    int x,y,z;
    int xInput,yInput,zInput;
    int e1,e2,e3;

    printf("Ingrese valor para x: ");
    scanf("%d",&xInput);
    printf("Ingrese valor para y: ");
    scanf("%d",&yInput);
    printf("Ingrese valor para z: ");
    scanf("%d",&zInput);

    x = xInput;
    y = yInput;
    z = zInput;

    assert((x == xInput) && (y == yInput) && (z == zInput) && (yInput > xInput) && (xInput > 0));

    e1 = y;
    e2 = z;
    e3 = (x/y) + (x%y);

    assert( (e1 == yInput) && (e2 == zInput) && ( e3 == xInput));

    printf("Valor final de x: %d\n",e1);
    printf("Valor final de y: %d\n",e2);
    printf("Valor final de z: %d",e3);
    
    return 0;
}