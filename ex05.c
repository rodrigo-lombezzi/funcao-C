#include <stdio.h>

int insatisfeitas(int nota);
float mediaSatisfacao(float mediaNota, int i);
float mediaDaMoradia(float mediaAno, int i);
int moraMais10anos(int ano, int cont);

int main() {
    int i = 0, ano, nota, cont = 0;
    float insatisfacao = 0, mediaAno = 0, mediaNota = 0;

    while (i > -1) 
    {
        printf("Digite o seu tempo de moradia na cidade em anos: \n");
        scanf("%d", &ano);
        
        if (ano == -1)
            break;

        cont = moraMais10anos(ano, cont);
        mediaAno += ano;

        printf("Digite sua satisfação com a cidade, digite 1 para bom, 2 para neutro, 3 para ruim e -1 para sair)\n");
        scanf("%d", &nota);

        insatisfacao += insatisfeitas(nota);
          
        mediaNota += nota;

        i++;
    }
    
    printf("Percentual de pessoas insatisfeitas: %.2f%%\n", (insatisfacao / i) * 100);
    printf("Media das notas: %.2f\n", (float)mediaSatisfacao(mediaNota, i));
    printf("Media de anos: %.2f\n", (float)mediaDaMoradia(mediaAno, i));
    printf("Percentual de pessoas que moram a mais de dez anos: %.2f\n", (float)cont / i * 100);
}

int moraMais10anos(int ano, int cont) 
{
    if (ano > 10)
    {
        cont++;
    }
    return cont;
}

int insatisfeitas(int nota) 
{
    if(nota == 3)
    {
        return 1;
    }
    return 0;
}

float mediaSatisfacao(float mediaNota, int i) 
{
    mediaNota /= i;
    return mediaNota;
}

float mediaDaMoradia(float mediaAno, int i) 
{
    mediaAno /= i;
    return mediaAno;
}
