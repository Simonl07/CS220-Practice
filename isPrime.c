#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 2 || atoi(argv[1]) <= 0){
        printf("Usage a.exe <positive integer>\n");
        return EXIT_FAILURE;
    }

    long value = atol(argv[1]);

    long cnt = value - 1;
    while(cnt > 1){
        if(value % cnt == 0){
            printf("%d is not a prime number\n", value);
            return EXIT_SUCCESS;
        }
        cnt -= 1;
    }
    printf("%d is a prime number\n", value);
    return EXIT_SUCCESS;
}
