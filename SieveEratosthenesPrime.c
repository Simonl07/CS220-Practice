#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int val);
void mult(int result[], int result_size ,int index);

int main(int argc, char *argv[]){
    if(argc != 2 || atol(argv[1]) <= 0){
        printf("Usage a.exe <max value>\n");
        return EXIT_FAILURE;
    }
    clock_t tic = clock();
    long max = atol(argv[1]);
    int result[max];
    result[0] = 0;
    result[1] = 0;
    for(int i = 2; i < max; i++){
        result[i] = 1;
    }


    for(int i = 2; i < max;i++){
        //printf("Done1\n");
        if(result[i] == 0){
            continue;
        }else{
            if(isPrime(i) == 1){
                //printf("found\n");
                mult(result, (sizeof(result)/sizeof(result[0])), i);
            }
        }
    }


    for(int i = 0; i < max; i++){

        if(result[i] == 1){
            printf("%d\n", i);
        }
    }
    clock_t toc = clock();
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    //printf("Done\n");
}

int isPrime(int val){
   long cnt = val - 1;
   //printf("Done2%d\n", cnt);
   while(cnt > 1){
       //printf("Done3\n");
       if(val % cnt == 0){
           return 0;
       }
       cnt -= 1;
   }
   return 1;
}

void mult(int result[], int result_size ,int index){
    //printf("found: %d setting...", index);
    for(int i = index + index; i < result_size; i += index){
        result[i] = 0;
        //printf("%d, ", i);
    }
}
