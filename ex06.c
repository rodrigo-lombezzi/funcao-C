#include <stdio.h>

int par();

int main(){
    
    printf("Numeros pares de 1 a 100 %d", par());
}

int par(){
    int i;
    int soma = 0;
    for (i = 0; i <= 100; i++)
    {   
        
        if(i % 2 == 0)
        {
            soma += i;
        }
    }

    return soma;
}
