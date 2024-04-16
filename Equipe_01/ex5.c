#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca/lista_01.h"

int main() {
    char linha[21];
  // Declara um array com tamanho suficiente para o m�ximo de asteriscos + '\0'

    int resultado;
    int tamanho;

    // Solicita ao usu�rio o tamanho da linha de asteriscos

    printf("Digite o tamanho da linha de asteriscos (1-20): ");
    scanf("%d", &tamanho);

    // Chama a fun��o desenhaLinha

    resultado = desenhaLinha(tamanho, linha);

    // Verifica o resultado da fun��o

    if (resultado == 0) {
        printf("Linha desenhada: %s\n", linha);

      // Exibe a linha se for bem-sucedido

    } else {
        printf("Erro: tamanho deve ser entre 1 e 20.\n");

      // Informa o erro se o tamanho for inv�lido

    }

    return 0;
}
