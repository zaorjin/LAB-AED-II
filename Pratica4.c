#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int codigo;
    char nome[30];
    float comprimento;
    int tipoPiso;
} via;

void quickSort(via v[], int esq, int dir);
void dados(via v[], int a);

int main() {
    via conjunto[5];
    int i, a;
    for (a=0; a < 5; a++){
        dados(conjunto, a);
        system("cls");
    }

    quickSort(conjunto,0,4);

    for (i=0; i < 5; i++)
        printf("%d\n%s\n%1.2f\n%d ", conjunto[i].codigo,conjunto[i].nome,conjunto[i].comprimento,conjunto[i].tipoPiso);

    printf("\n\n");
}


void dados(via v[], int a){

    printf("Formulario RUA %d \n\n", a+1);

    printf("\nDigite o codigo: ");
    scanf("%d", &v[a].codigo);

    printf("\nDigite o nome: " );
    scanf("%s", &v[a].nome);

    printf("\nDigite o tamanho: ");
    scanf("%f", &v[a].comprimento);


    srand(clock());
    v[a].tipoPiso = rand()%3;

}

void quickSort(via v[], int esq, int dir){

    int i=esq, j=dir;
    via x, y;
    x = v[(esq+dir)/2];
    do
    {
        while ((v[i].comprimento < x.comprimento) && (i < dir))
            i++;
        while ((x.comprimento < v[j].comprimento) && (j > esq))
            j--;

        if (i <= j)
        {
            y = v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (esq < j)
        quickSort(v, esq, j);
    if (i < dir)
        quickSort(v, i, dir);
}
