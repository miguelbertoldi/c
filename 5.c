#include<stdio.h>

int negativos(int n, float *array){
    for(int i = 1; i <= 20; i++){
        if(array[i] < 0){
            n++;
        }
    }
    return n;
}

int main(){
    int n=0;
    float array[20];
    
	for(int j=1; j<= 20; j++){
        printf("\nDigite um valor: ");
        scanf("f",&array[j]);
    }
    printf("Total de números negativos: %d",negativos(n, &array));
    return 0;
}