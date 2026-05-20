#include <stdio.h>

// 1. FUNÇÃO RECURSIVA PARA A RAINHA (Substitui o loop FOR)
void moverRainha(char opcao, int passos) {
    // Caso Base: Se os passos chegarem a 0, para a execução
    if (passos == 0) {
        return; 
    }

    // Ação: Executa o switch uma vez
    switch (opcao) {
        case 'a': printf("Rainha: Esquerda \n"); break;
        case 'd': printf("Rainha: Direita \n"); break;
        case 'w': printf("Rainha: Frente \n"); break;
        case 's': printf("Rainha: Trás \n"); break;
        case 'q': printf("Rainha: Diagonal Esquerda \n"); break;
        case 'e': printf("Rainha: Diagonal Direita \n"); break;
        case 'z': printf("Rainha: Diagonal traseira esquerda \n"); break;
        case 'x': printf("Rainha: Diagonal traseira direita \n"); break; 
        default:  printf("Opção Inválida \n"); return; // Se for inválido, para logo
    }

    // Caso Recursivo: Chama a si mesma diminuindo 1 passo
    moverRainha(opcao, passos - 1);
}

// 2. FUNÇÃO RECURSIVA PARA A TORRE (Substitui o loop WHILE)
void moverTorre(char opcao, int passos) {
    if (passos == 0) return;

    switch (opcao) {
        case 'a': printf("Torre: Esquerda \n"); break;
        case 'd': printf("Torre: Direita \n"); break;
        case 'w': printf("Torre: Frente \n"); break;
        case 's': printf("Torre: Trás \n"); break;
        default:  printf("Opção Inválida! \n"); return;
    }

    moverTorre(opcao, passos - 1);
}

// 3. FUNÇÃO RECURSIVA PARA O BISPO (Substitui o loop DO-WHILE)
void moverBispo(char opcao, int passos) {
    if (passos == 0) return;

    switch (opcao) {
        case 'q': printf("Bispo: Diagonal Esquerda \n"); break;
        case 'e': printf("Bispo: Diagonal Direita \n"); break;
        case 'z': printf("Bispo: Diagonal traseira esquerda \n"); break;
        case 'x': printf("Bispo: Diagonal traseira direita \n"); break; 
        default:  printf("Opção Inválida \n"); return;
    }

    moverBispo(opcao, passos - 1);
}

int main() {
    char opcao;

    printf("--JOGO DE XADREZ-- \n\n");

    // RAINHA
    printf("Movimentação Rainha \n");
    printf("Aperte A,S,D,W,Q,E,Z,X para se mover \n");
    scanf("%c", &opcao);
    moverRainha(opcao, 8); // Despara a função pedindo 8 repetições

    // TORRE
    printf("Movimentação Torre \n");
    printf("Aperte A,S,D,W para se mover \n");
    scanf(" %c", &opcao);
    moverTorre(opcao, 5); // Pede 5 repetições

    // BISPO
    printf("Movimentação Bispo \n");
    printf("Aperte Q,E,Z,X para se mover \n");
    scanf(" %c", &opcao);
    moverBispo(opcao, 5); // Pede 5 repetições

    // CAVALO (Mantive a lógica do L fixa para Trás e Esquerda)
    printf("Movimentação Cavalo \n");
    printf("Cavalo: Trás \n");
    printf("Cavalo: Trás \n");
    printf("Cavalo: Esquerda \n");

    return 0;
}