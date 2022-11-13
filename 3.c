#include <stdio.h>
#include <stdlib.h>

int comparar(int *a, int *b)

{
   int aux = 0;

   if(*b > *a)
   {
       aux = *b;
       *b = *a;
       *a = aux;
   }
}

int main()
{
   int a, b;
   
   a = b = 0;

   printf("\n Digite um valor: ");
   fflush(stdin);
   scanf("%d", &a);
   
   printf("\n Digite outro valor: ");
   fflush(stdin);
   scanf("%d", &b);

   comparar(&a,&b);

   printf("\nMaior valor: %d",a);
   printf("\nMenor valor: %d",b);

   return 0;

}