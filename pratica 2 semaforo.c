#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void retornaStatusSemaforo(int semaforo, int *status);

int main(){
    int vetor[6]={10,20,30,40,50,60},x=0,a=0,status;
    printf("Digite um numero: ");
    scanf("%d",&x);
    for(a=0;a<6;a++){
        if(x==vetor[a]){
            retornaStatusSemaforo(x,&status);
        }
    }
    printf("\n%x", &status);
    printf("\n%d", status);
    if(status == 0)printf("\nverde");
    if(status == 1)printf("\namarelo");
    if(status == 2)printf("\nvermelho");
    return (0);
}

void retornaStatusSemaforo(int semaforo, int *status){
    srand(time(NULL));
    *status = rand()% 3;
}
