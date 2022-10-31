#include <stdio.h>
#include <assert.h>


int main(){
    int i,iInput,j,jInput,k,kInput;
    int e1,e2,e3;

    printf("Ingrese la variable i: ");
    scanf("%d",&iInput);
    printf("Ingrese la variable j: ");
    scanf("%d",&jInput);
    printf("Ingrese la variable k: ");
    scanf("%d",&kInput);

    i = iInput;
    j = jInput;
    k = kInput;
    /* precondicion */
    assert(i == iInput && j == jInput && k == kInput && k > 0 && i > j);

    e1 = j + i;
    e2 = j + k;
    e3 = k + i;

    /* post condition */

    assert( (e1 == jInput + iInput) && (e2 == jInput + kInput) && (e3 == kInput + iInput));
    printf("El estado final de i es : %d \n",e1);
    printf("El estado final de j es : %d \n",e2);
    printf("El estado final de k es : %d ",e3);

    return 0;
}