#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7
int i,j;
int** mt;
int* pr;

int main(){
    
    srand(time(NULL));
    mt = (int** )malloc(N * sizeof(int*));

    for(i = 0; i<N ; i++) {
        pr = (int* )malloc(M * sizeof(int));
        mt[i] = pr;
        for(j = 0; j<M ; j++) {
            pr[j] = rand()%100;
            printf("%d \t", pr[j]);
        }
        printf("\n");
    }

    return 0;
}