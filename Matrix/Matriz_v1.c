#include <stdio.h>
#include <string.h>

int main()
{
    int linhas, colunas, linha, coluna;
    char numString[20];
    // Recebendo o formato da matriz do usuario.
    printf("Digite o formato da matriz (linha, coluna): 0 0\nFormato: ");
    scanf("%d %d", &linhas, &colunas);

    // Criando a matriz de acordo com o formato passado pelo usuario.
    int matriz[linhas][colunas];

    // Definindo os valores para cada posição da matriz.
    for (linha = 0; linha < linhas; linha++)
    {
        for (coluna = 0; coluna < colunas; coluna++)
        {
            printf("Qual valor da posicao [%d][%d]?\n(0-999): ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // Exibindo a matriz organizada.
    for (linha = 0; linha < linhas; linha++)
    {
        for (coluna = 0; coluna < colunas; coluna++)
        {
            // Convertendo o valor da posição atual da matriz para string.
            sprintf(numString, "%d", matriz[linha][coluna]);
            // Decidindo a forma apropriada de exibir o valor da matriz.
            switch (strlen(numString))
            {
                case 1:
                    printf("[  %d  ]", matriz[linha][coluna]);
                    break;
                case 2:
                    printf("[ %d  ]", matriz[linha][coluna]);
                    break;
                case 3:
                    printf("[ %d ]", matriz[linha][coluna]);;
                    break;
            }
            // Sempre que a posição atual for o final da coluna da linha atual, faz uma quebra de linha visual.
            if (coluna == colunas-1)
            {
                printf("\n");
            }
        }
    }
    getchar();
    printf("\nEnter para finalziar...");
    getchar();
    return 0;
}
