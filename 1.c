#include <stdio.h>

int main()
{
    int i=1;
    int *ponteiroI = &i;
    float f = 0.6;
    float *ponteiroF = &f;
    char c ='a';
    char  *ponteiroC = &c;
    
   *ponteiroI = 2;
   *ponteiroF = 0.2;
   *ponteiroC = 'b';

    printf("Inteiro: %i ", *ponteiroint);
    printf("\n Real: %f ",  *ponteirofloat);
    printf("\nChar: %c ", *ponteirochar);
}