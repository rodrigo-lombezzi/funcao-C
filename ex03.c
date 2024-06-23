#include <stdio.h>

int verificaSexo(char sexo, int *homem, int *mulher);
void verificarEstadoCivil(char estadoCivil, int *solteiro, int *casado, int *divorciado);

int main() {
    char sexo, estadoCivil;
    int i = 0;
    short solteiro = 0, casado = 0, divorciado = 0, homem = 0, mulher = 0;
  

    while (i > -1)  
    {
        printf("Digite seu sexo (m/f) e digite x para sair: \n");
        scanf(" %c", &sexo);
        if (sexo == 'x')
            break;

        verificaSexo(sexo, &homem, &mulher);

        printf("Digite seu estado civil, com 1 para solteiro, 2 para casado e 3 para divorciado: \n");
        scanf(" %c", &estadoCivil);

        verificarEstadoCivil(estadoCivil, &solteiro, &casado, &divorciado);

        i++;
    }

    printf("Percentual de Homens: %.2f%%\n", (float)homem / i * 100);
    printf("Percentual de Mulheres: %.2f%%\n", (float)mulher / i * 100);
    printf("Percentual de pessoas solteiras: %.2f%%\n", (float)solteiro / i * 100);
    printf("Quantidade de pessoas casadas: %d\n", casado);
    printf("Percentual de pessoas divorciadas: %.2f%%\n", (float)divorciado / i * 100);
}

void verificarEstadoCivil(char estadoCivil, int *solteiro, int *casado, int *divorciado)
{
    switch (estadoCivil)
    {
        case '1': 
            (*solteiro)++;
            break;
        case '2': 
            (*casado)++;
            break;
        case '3': 
            (*divorciado)++;
            break;
    }
}

int verificaSexo(char sexo, int *homem, int *mulher) 
{
    if (sexo == 'm')
            (*homem) ++;
        else if (sexo == 'f')
            (*mulher) ++;
}
