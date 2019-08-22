#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraRestricao(int *restricao, int *rua);

main(){
    int ruas[10]={0,0,0,0,0,0,0,0,0,0},rua=0,restricao=-1,a;
    printf("Trafego \n 1 = Livre \n 2 = Interditado \n 3 = Lento");
    for(a=0;a<10;a++){
        geraRestricao(&restricao,&rua);
        ruas[rua]=restricao;
        printf("\nTrafego: %d da rua: %d",ruas[rua],rua);
    }



 return 0;
}

void geraRestricao(int *restricao, int *rua){
    int c,a;
    srand(clock());
    c=(rand()%3)+1;
    a=(rand()%10);
    *restricao=c;
    *rua=a;

}
