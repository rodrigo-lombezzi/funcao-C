#include <stdio.h>

float calcularAltura(float somaAltura, int i);
int maiorIdade(int idade, int maior);
float calcularIdade(float somaIdade, int i);
int percentualAltura(float altura);

int main() {
    int i = 0, somaIdade = 0, alturaAcima = 0;
    short idade, maior = 0;
    float altura, somaAltura = 0; 

    while (i > -1) 
    {
        printf("Digite sua idade: \n");
        scanf("%hd", &idade);
        if (idade < 0)
            break;

        somaIdade += idade;
        maior = maiorIdade(idade, maior);

        printf("Digite sua altura em metros: \n");
        scanf("%f", &altura);

        somaAltura += altura;
        alturaAcima += percentualAltura(altura);

        i++;
    }
    printf("Maior idade registrada: %hd\n", maior);
    printf("Média da idade da população: %.2f\n", calcularIdade(somaIdade, i));
    printf("Média da altura da população: %.2f\n", calcularAltura(somaAltura, i));
    printf("Percentual de pessoas com altura acima de 1,80 metros: %.2f\n", (alturaAcima / (float)i) * 100.0);

    return 0;
}

int maiorIdade(int idade, int maior) 
{
    if (idade > maior) {
        maior = idade;
    }
    return maior;
}

float calcularAltura(float somaAltura, int i) 
{
    return somaAltura / i;
}

int percentualAltura(float altura) 
{
    if (altura > 1.8) 
    {
        return 1;
    }
    return 0;
}

float calcularIdade(float somaIdade, int i) {
    float soma = somaIdade / i;
    return soma;
}
