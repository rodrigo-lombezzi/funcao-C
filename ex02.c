#include <stdio.h>
#include <string.h>

int superiorCompleto(char escolaridade[]);
int medioIncompleto(char escolaridade[]);
void distribuicaoCor(int cor, int distribuicaoCores[]);

int main() {
    int i = 0, superiorC = 0, medioIn = 0, cor;
    int distribuicaoCores[3] = {0};
    char escolaridade[50];

    while (i > -1) 
    {
        printf("Digite a sua cor de pele, digite 1 para branco, 2 para negro, 3 para outro e -1 para sair: \n");
        scanf("%d", &cor);

        if (cor == -1)
            break;

        distribuicaoCor(cor, distribuicaoCores);
        
        printf("Digite o seu grau de escolaridade ex 'ensino_superior_completo': \n");
        scanf("%s", & escolaridade);

        superiorC += superiorCompleto(escolaridade);
        medioIn += medioIncompleto(escolaridade);
        i++;
    }
    
    printf("Percentual de pessoas com ensino superior completo: %.2f\n", (float)superiorC / i * 100);
    printf("Percentual de pessoas com ensino médio incompleto: %.2f\n", (float)medioIn / i * 100);
    
    printf("Branco: %d pessoas\n", distribuicaoCores[0]);
    printf("Negro: %d pessoas\n", distribuicaoCores[1]);
    printf("Outro: %d pessoas\n", distribuicaoCores[2]);
}

void distribuicaoCor(int cor, int distribuicaoCores[]) 
{
    switch (cor) 
    {
        case 1:
            distribuicaoCores[0]++; 
            break;
        case 2:
            distribuicaoCores[1]++; 
            break;
        case 3:
            distribuicaoCores[2]++;
            break;
    }
}

int superiorCompleto(char escolaridade[]) 
{
    if (strcmp(escolaridade, "ensino_superior_completo") == 0) 
    {
        return 1;
    }
    return 0;
}

int medioIncompleto(char escolaridade[])
{
    if (strcmp(escolaridade, "ensino_medio_incompleto") == 0)
    {
        return 1;
    }
    return 0;
}


