

#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#include <locale.h>
 int main()
{
    
    // variáveis
    int mat[5][5];
    int linha, coluna, i, j, alinha, acoluna, cont, d, cont1, tmp,mov;
    do
    {

        printf("\n\tMENU\n\t");
        printf("\n\tDigite 3 para uma matriz 3x3:\n\t");

        printf("\n\tDigite 4 para uma matriz 4x4:\n\t");

        printf("\n\tDigite 5 para uma matriz 5x5:\n\t");
        printf("Digite uma das opções:");
        scanf("%d", &d);
        system("cls");

    } while ((d < 3) || (d > 5));
    // gera a matriz
    for (linha = 0; linha < d; linha++)
    {
        for (coluna = 0; coluna < d; coluna++)
        {
            mat[linha][coluna] = d * linha + coluna;
        }
        printf("\t\n");
    }

    // embaralha a matriz
    srand(time(NULL));

    for (linha = d - 1; linha > 0; linha--)
    {
        for (coluna = d - 1; coluna > 0; coluna--)
        {
            i = rand() % (linha + 1);
            j = rand() % (coluna + 1);

            tmp = mat[i][j];
            mat[i][j] = mat[linha][coluna];
            mat[linha][coluna] = tmp;
        }
    }

    printf("\t\n");
    // exibe a matriz
    for (linha = 0; linha < d; linha++)
    {
        for (coluna = 0; coluna < d; coluna++)
        {
            printf(" %d ", mat[linha][coluna]);
        }
        printf("\t\n");
    }
alinha=linha;
acoluna = coluna;
if(mov==getch(4))
{
    mov = alinha--;
    mov = acoluna--;
}else{
    printf("Não pode movimentar");
}
if(mov==getch(6)){
    mov = alinha++;
    mov = acoluna++;
}else{
    printf("Não pode movimentar");
}
if(mov==getch(2)){
    mov = alinha--;
    mov = acoluna--;
}else{
    printf("Não pode movimentar");
}
if(mov==getch(8)){
    mov = alinha++;
    mov = acoluna++;
}else{
    printf("Não pode movimentar");
}

return 0;
}
