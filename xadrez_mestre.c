#include <stdio.h>

// -----------------------------------------------------------------
// CONSTANTES DE MOVIMENTOß
// -----------------------------------------------------------------
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define CAVALO_PASSOS_VERTICAIS 2 // Cima
#define CAVALO_PASSOS_HORIZONTAIS 1 // Direita


void moverTorreRecursivo(int passosRestantes) {
    // Caso base: Se não há mais passos a mover, a recursão para.
    if (passosRestantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento da casa atual.
    printf("Direita\n");

    // Chamada recursiva: Move para o próximo passo (passosRestantes - 1).
    moverTorreRecursivo(passosRestantes - 1);
}


void moverRainhaRecursivo(int passosRestantes) {
    // Caso base
    if (passosRestantes <= 0) {
        return;
    }

    // Ação
    printf("Esquerda\n");

    // Chamada recursiva
    moverRainhaRecursivo(passosRestantes - 1);
}


void moverBispoRecursivoComLoops(int passosRestantes) {
    // Caso base
    if (passosRestantes <= 0) {
        return;
    }

    // Loops Aninhados para simular um ÚNICO movimento diagonal (Cima Direita)
    // Requisito: Externo para o movimento vertical (Cima), interno para o horizontal (Direita).

    // Variáveis múltiplas no loop externo (opcional, mas adiciona complexidade)
    int i = 0, casasVerticais = 1;
    // Loop externo: Movimento Vertical (Cima). casasVerticais sempre será 1 para uma diagonal simples.
    for (i = 0; i < casasVerticais; i++) {
        printf("Cima\n");

        // Loop interno: Movimento Horizontal (Direita).
        int j = 0, casasHorizontais = 1;
        while (j < casasHorizontais) {
            printf("Direita\n");
            j++;
        }
    }

    // Chamada recursiva: Move para o próximo passo diagonal (passosRestantes - 1).
    moverBispoRecursivoComLoops(passosRestantes - 1);
}

// -----------------------------------------------------------------
// FUNÇÃO PRINCIPAL
// -----------------------------------------------------------------
int main() {


    printf("--- Movimentacao da Torre  ---\n");
    moverTorreRecursivo(MOVIMENTO_TORRE);
    printf("Torre moveu %d casas para a direita.\n\n", MOVIMENTO_TORRE);


    printf("--- Movimentacao da Rainha  ---\n");
    moverRainhaRecursivo(MOVIMENTO_RAINHA);
    printf("Rainha moveu %d casas para a esquerda.\n\n", MOVIMENTO_RAINHA);


    printf("--- Movimentacao do Bispo ---\n");
    moverBispoRecursivoComLoops(MOVIMENTO_BISPO);
    printf("Bispo moveu %d casas na diagonal (Cima Direita).\n\n", MOVIMENTO_BISPO);


    printf("--- Movimentacao do Cavalo ---\n");


    int i, flagAtiva = 1;
    for (i = 1; i <= CAVALO_PASSOS_VERTICAIS && flagAtiva == 1; i++) {

        // Simula o movimento vertical
        printf("Cima\n");

        // Uso de 'continue': Se for o último passo vertical, pula a impressão extra.
        // O break e o loop interno serão usados para o movimento horizontal.
        if (i == CAVALO_PASSOS_VERTICAIS) {
            // Demonstração de 'continue'
            continue;
        }
    }

    // O loop interno aninhado gerencia o movimento de 1 casa para a DIREITA.
    // Variável Múltipla e Condição Múltipla: `j` para contagem e `limite` como condição extra.
    int j = 0;
    int limite = CAVALO_PASSOS_HORIZONTAIS;
    while (j < limite && i > 0) { // i > 0 é uma condição que já foi satisfeita no loop for

        printf("Direita\n");

        j++; // Incrementa o passo

        // Uso de 'break': Garante que, se o limite for atingido, o loop para imediatamente.
        if (j == limite) {
            // Demonstração de 'break'
            break;
        }
    }

    printf("Cavalo moveu em 'L' (2 Cima, 1 Direita).\n\n");

    return 0;
}
