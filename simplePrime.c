#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int val);

int main(int argc, char *argv[]){
    if(argc != 2 || atol(argv[1]) <= 0){
        printf("Usage a.exe <max value>\n");
        return EXIT_FAILURE;
    }
    clock_t tic = clock();
    long max = atol(argv[1]);
    for(long i = 2; i < max;i++){
        if(isPrime(i) == 1)
        {
            //printf("%d\n",i);
        }
    }
    clock_t toc = clock();
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
}

int isPrime(int val){

    long cnt = val - 1;
    while(cnt > 1){
        if(val% cnt == 0){
            return 0;
        }
        cnt -= 1;
    }
    return 1;

}
