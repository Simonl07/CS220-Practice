#include <stdio.h>
#include <stdlib.h>

int isPrime(int val);
void mult(int result[], int result_size ,int index);

int main(int argc, char *argv[]){
    if(argc != 2 || atol(argv[1]) <= 0){
        printf("Usage a.exe <max value>\n");
        return EXIT_FAILURE;
    }

    long max = atol(argv[1]);
    int result[max];

    for(int i = 0; i < max;i++){
        if(result[i] == 1){
            continue;
        }else{
            if(isPrime(i) == 1){
                result[i] == 1;
                mult(result, (sizeof(result)/sizeof(result[0])), i);
            }
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

void mult(int result[], int result_size ,int index){
    for(int i = index + index; index < result_size; i += index){
        result[i] == 1;
    }
}
