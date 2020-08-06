#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i,result[3],headnum=0,tailnum=0;
    srand((unsigned int)time(NULL));

    char name[40];

    printf("Who are you?\n");
    scanf("%s",name);
    printf("Hello %s!\n",name);

    printf("Tossing a coin...\n");

    for(i=0;i<3;i++){
        result[i] = rand() % 2;

        if(result[i]==0) {
            printf("Round %d: Heads\n",i+1);
            headnum++;
        }

        if(result[i]==1) {
            printf("Round %d: Tails\n",i+1);
            tailnum++;
        }
    }

    printf("Heads: %d, Tails: %d\n",headnum,tailnum);

    if(headnum>tailnum) printf("%s won\n",name);
    else printf("%s lost\n",name);
    return 0;
}