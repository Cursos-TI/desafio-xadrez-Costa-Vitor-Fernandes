#include <stdio.h>

int main() {
    // Variáveis número de casas a serem movidas
    int MOVIMENTO_TORRE = 5;
    int MOVIMENTO_BISPO = 5;
    int MOVIMENTO_RAINHA = 8;
    // Variável para os loops
    int i = 0;

    // -----------------------------------------------------------------
    // TORRE
    // Movimento: 5 casas para a direita (linha reta - horizontal)
    // Estrutura de Repetição: for
    // -----------------------------------------------------------------
    printf("--- Movimentacao da Torre ---\n");
    // O loop 'for' é ideal quando o número de iterações é conhecido (MOVIMENTO_TORRE)
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        // Imprime a direção a cada casa percorrida
        printf("Direita\n");
    }
    printf("Torre moveu %d casas para a direita.\n\n", MOVIMENTO_TORRE);

    // -----------------------------------------------------------------
    // BISPO
    // Movimento: 5 casas na diagonal para cima e à direita
    // Estrutura de Repetição: while
    // -----------------------------------------------------------------
    printf("--- Movimentacao do Bispo ---\n");
    i = 0; // Reinicia o contador para o loop 'while'
    // O loop 'while' é simples e direto para verificar uma condição no início
    while (i < MOVIMENTO_BISPO) {
        // O Bispo se move na diagonal, combinando duas direções
        printf("Cima Direita\n");
        i++; // Incrementa o contador
    }
    printf("Bispo moveu %d casas na diagonal (Cima Direita).\n\n", MOVIMENTO_BISPO);

    // -----------------------------------------------------------------
    // RAINHA
    // Movimento: 8 casas para a esquerda (pode ser qualquer direção,
    //             escolhemos um movimento reto para este caso)
    // Estrutura de Repetição: do-while
    // -----------------------------------------------------------------
    printf("--- Movimentacao da Rainha ---\n");
    i = 0; // Reinicia o contador para o loop 'do-while'
    // O loop 'do-while' garante que o corpo do loop será executado pelo menos uma vez,
    // mesmo que a condição seja falsa (embora aqui ela seja verdadeira)
    if (MOVIMENTO_RAINHA > 0) { // Garante que a simulação ocorre se o movimento for > 0
        do {
            // Imprime a direção a cada casa percorrida
            printf("Esquerda\n");
            i++; // Incrementa o contador
        } while (i < MOVIMENTO_RAINHA);
    }
    printf("Rainha moveu %d casas para a esquerda.\n\n", MOVIMENTO_RAINHA);

    return 0;
}
