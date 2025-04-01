#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int i;
double vt[N];

int main(){
    srand(time(NULL));
    for (i = 0; i<N; i++) {
        vt[i]=1+rand()%10000 / (float) 100;
    }
        
    double* pr;
    pr = vt;

    for (i = 0; i < N; i++)
    {
        printf("%.2f ", pr[i]);
    }
    

}

