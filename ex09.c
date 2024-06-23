#include <stdio.h>

int potenciacao(short num, short potencia);

int main(){
    short num, potencia;
printf("Digite um numero\n");
scanf("%hd", &num);

printf("Digite a potencia\n");
scanf("%hd", &potencia);

printf ("Potencia %d", potenciacao(num, potencia));
}

int potenciacao(short num, short potencia){
    int resul = 1;
    for (int i = 0; i < potencia; i++)
    {   
        resul *=num;
    }

    return resul;
}
