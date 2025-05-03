#include <stdio.h>
// Declarando as funções recursivas das peças:
void recursividadeRainda (int mvRainha) {
    if (mvRainha <= 8)
    {
        printf("Esquerda\n");
        recursividadeRainda( mvRainha + 1);
    }
}

void recursividadeTorre (int mvTorre){
    if (mvTorre <= 5)
    {
        printf("Frente\n");
        recursividadeTorre( mvTorre + 1);
    }
    
}

void recursividadeBispo (int mvBispo) {
    while (mvBispo <= 5)
    {
        printf("Frente, ");

       for (int i = 1; i < 2; i++)
       {
        printf("Direita\n");
       }
       
       mvBispo++;
    }
    
}
    

int main() {
    // Declarando variáveis:
    int movimentoBispo = 1, movimentoRainha = 1, movimentoTorre = 1, movimentoCavalo = 1;
    
    // Iniciando o jogo:
    
    printf("JOGO DE XADREZ.\n");
    printf("\n");

    //Chamando as recursividades e printando os movimentos das peças:
    printf("Movimentando o Bispo:\n");
    recursividadeBispo(movimentoBispo);

    printf("\n");

    printf("Movimentando a Rainha:\n");
    recursividadeRainda(movimentoRainha);

    printf("\n");

    printf("Movimentando a Torre:\n");
    recursividadeTorre(movimentoTorre);
    
    printf("\n");

    printf("Movimentando o Cavalo:\n");
    while (movimentoCavalo --)
    {
        for (int i = 0, j = 2; i < j; i++)
        {
            printf("FRENTE\n");
        }
        printf("DIREITA\n");
    } 
    
    return 0;
}
