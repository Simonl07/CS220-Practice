#include <stdio.h>
#include <stdlib.h>

int isPrime(int val);

int main(int argc, char *argv[]){
    if(argc != 2 || atol(argv[1]) <= 0){
        printf("Usage a.exe <max value>\n");
        return EXIT_FAILURE;
    }
    long max = atol(argv[1]);
    for(long i = 2; i < max;i++){
        if(isPrime(i) == 1)
        {
            printf("%d\n",i);
        }
    }
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
