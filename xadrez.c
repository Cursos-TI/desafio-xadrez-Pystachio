/*DESAFIO XADREZ NIVEL NOVATO
DESENVOLVIDO POR: LUAN DE PAULA BORGES*/

#include <stdio.h>
int movimentoRainha = 0; // Variável para contar os movimentos da Rainha
int movimentoBispo = 0; // Variável para contar os movimentos do Bispo
int movimentoTorre = 0; // Variável para contar os movimentos da Torre

int main(){
    printf("------ Movimento da Torre ------\n");
    while (movimentoTorre < 5){ // Enquanto o número de movimentos for menor que 5 imprime a direção do cavalo
    printf("Direita\n"); // Imprime a direção do movimento
    movimentoTorre++; // Incrementa o contador de movimentos da Torre.     
    }
printf("\n"); // Pula uma linha para melhor visualização
printf("------ Movimento da Rainha ------\n");
do {
    printf("Esquerda\n"); // Imprime a direção do movimento
    movimentoRainha++; // Incrementa o contador de movimentos da Rainha
} while (movimentoRainha < 8); // Enquanto o número de movimentos for menor que 8 imprime a direção da rainha
printf("\n"); // Pula uma linha para melhor visualização
printf("------ Movimento do Bispo ------\n");
for (int i = 0; i < 5; i++){ // Loop que itera 5 vezes para o movimento do Bispo
    if (i % 2 == 0) { // Se o índice for par, imprime "Cima"
        printf("Cima\n"); // Imprime a direção do movimento
    } else { // Se o índice for ímpar, imprime "Direita"
        printf("Direita\n"); // Imprime a direção do movimento
    }
}
    return 0;
}