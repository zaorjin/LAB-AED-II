#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int retornaStatusSemaforo(int semaforo);

int main(){
    int vetor[6]={10,20,30,40,50,60},x=0,a=0,status;
    printf("Digite um numero: ");
    scanf("%d",&x);
    for(a=0;a<6;a++){
        if(x==vetor[a]){
            status=retornaStatusSemaforo(x);
        }
    }
    if(status == 0)printf("verde");
    if(status == 1)printf("amarelo");
    if(status == 2)printf("vermelho");
    return (0);
}

int retornaStatusSemaforo(int semaforo){
    srand(time(NULL));
    return(rand()%3);
}
