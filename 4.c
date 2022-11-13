#include <stdio.h>
#include <conio.h>
#include <math.h>

float PI=3.14;

float volume(float raio){
    float v=(PI*pow(raio,3))*4/3;
    return v;
}

int main(){
    float r,result;

    printf("Digite o raio: ");
    scanf("%f",&r);

    Resultado=Volume(r);
    printf("%.3f\n",result);

    getchar();
    return 0;
}