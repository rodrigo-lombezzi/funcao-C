#include <stdio.h>
#include <string.h>

float calcularMediaRenda(float somaRenda, int i);
float percentualDesempregado(int i, int desempregado);
int percentualRendaAcima(float renda);

int main() {
    int i = 0, desempregado = 0, acima = 0;
    float somaRenda = 0, renda, maiorRenda = 0;
    char profissao[100], profissaoMaiorRenda[100];

    while (i > -1) 
    {
        printf("Digite a profissao, digite '-1' para terminar: \n");
        scanf("%s", profissao);

        if (strcmp(profissao, "x") == 0)
            break;

        printf("Digite a renda mensal: ");
        scanf("%f", &renda);
    
        if (renda == 0 || strcmp(profissao, "desempregado") == 0) 
        {
            desempregado++;
        }

        if (renda > maiorRenda) 
        {
            maiorRenda = renda;
            strcpy(profissaoMaiorRenda, profissao);
        }

        somaRenda += renda;
        acima = percentualRendaAcima(renda);
        i++;
    }

    printf("Média da renda mensal da população: %.2f\n", calcularMediaRenda(somaRenda, i));
    printf("Profissão com maior média de renda: %s\n", profissaoMaiorRenda);
    printf("Percentual de pessoas desempregadas: %.2f\n", percentualDesempregado(i, desempregado));
    printf("Percentual de pessoas com renda acima de R$ 5000,00: %.2f\n", acima);

}

float calcularMediaRenda(float somaRenda, int i) 
{
    somaRenda /= i;
    return somaRenda;
}

float percentualDesempregado(int i, int desempregado)
{
    float semTrabalho = 0;
    semTrabalho = (desempregado / (float)i) * 100;
    return semTrabalho;
}

int percentualRendaAcima(float renda)
{
    int cont = 0;
    if(renda > 5000)
    {
        cont++;
        return cont;
    }
    
}
