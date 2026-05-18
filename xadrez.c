#include <stdio.h>

int main() {
    char opcao;
    int t = 0, b = 0;

    printf("--JOGO DE XADREZ-- \n");
    printf(" \n");

    printf("Movimentação Rainha \n");
    printf("Aperte A,S,D,W,Q,E,Z,X para se mover \n");
    scanf("%c", &opcao);

    

    for (int r = 0; r < 8; r++){
        switch (opcao)
        {
        case 'a':
            printf("Rainha: Esquerda \n");
            break;
        case 'd':
            printf("Rainha: Direita \n");
            break;
        case 'w':
            printf("Rainha: Frente \n");
            break;
        case 's':
            printf("Rainha: Trás \n");
            break;
        case 'q':
            printf("Rainha: Diagonal Esquerda \n");
            break;
        case 'e':
            printf("Rainha: Diagonal Direita \n");
            break;
        case 'z':
            printf("Rainha: Diagonal traseira esquerda \n");
            break;
        case 'x':
            printf("Rainha: Diagonal traseira direita \n");
            break;                
        
        default: printf("Opção Inválida \n");
            break;
        }
    }

    printf("Movimentação Torre \n");
    printf("Aperte A,S,D,W para se mover \n");
    scanf(" %c", &opcao);



    while(t < 5){
        t++;
        switch (opcao)
        {
        case 'a':
            printf("Torre: Esquerda \n");
            break;
        case 'd':
            printf("Torre: Direita \n");
            break;
        case 'w':
            printf("Torre: Frente \n");
            break;
        case 's':
            printf("Torre: Trás \n");
            break;
        default: printf("Opção Inválida! \n") ;
            break;
    }
    }

     printf("Movimentação Bispo \n");
    printf("Aperte Q,E,Z,X para se mover \n");
    scanf(" %c", &opcao);

    do{ 
        b ++;
        switch (opcao)
        {
        case 'q':
            printf("Bispo: Diagonal Esquerda \n");
            break;
        case 'e':
            printf("Bispo: Diagonal Direita \n");
            break;
        case 'z':
            printf("Bispo: Diagonal traseira esquerda \n");
            break;
        case 'x':
            printf("Bispo: Diagonal traseira direita \n");
            break;                
        
        default: printf("Opção Inválida \n");
            break;
        }
    }while(b < 5);

    return 0;
}