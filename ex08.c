#include <stdio.h>

int bissesto(int ano);

int main(){
    int ano;
    printf("Digite um ano\n");
    scanf("%d", &ano);

}

int bissesto(int ano){
    if(ano % 4 == 0 && ano % 100 != 0 || (ano % 400 == 0))
    {
        printf("é bissexto\n");
        return 1;

    }else
    {
        printf("não é bissexto\n");
        return 0;
    }
}
