#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int addNome(char[][40],int);
void mostraNome(char[100][40], int);
void removeNome(char[][40]);

int main(void)
{
        char Nome[100][40] = {'\0'};
        int Op = 0;
        int qtdNomes = 0;


        while (Op!=4)
        {

                printf("\nTecle 1 para adicionar um nome\n");
                printf("\nTecle 2 para apagar nome\n");
                printf("\nTecle 3 para listar nomes\n");
                printf("\nTecle 4 para encerrar\n");
                scanf( "%d", &Op );

                switch (Op)
                {
                        case 1:
                                qtdNomes = addNome(Nome, qtdNomes);
                                break;
                        case 2:

                                removeNome(Nome);
                                break;
                        case 3:
                                mostraNome(Nome, qtdNomes);
                                break;
                        case 4:
                                break;
                }
        }

        return 0;

}



int addNome(char N[][40], int i)
{

        printf("\nDigite seu nome\n");
        scanf("%s", N[i]);

        return ++i;

}

void mostraNome(char p[100][40], int i)
{
        int j = 0;

        for (; j < i; j++ )
                printf("%s,\t", p[j]);
}


void removeNome(char Nome[][40] )
{

        int posicao = 0;

        printf("Posicao a ser removida: ");
        scanf("%d", &posicao );

        strcpy(Nome[posicao-1], "vazia");

}