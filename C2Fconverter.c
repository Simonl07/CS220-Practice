#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    char input[200];
    printf("Enter the temperature(in format \"<value>C\" or \"<value>F\"): ");
    scanf("%s", input);
    char mode = input[strlen(input)-1];
    float output;
    if(mode == 'C'){
        input[strlen(input) - 1] = '\0';
        float value = atof(input);
        printf("Result: %0.2f degrees fahrenheit.\n", value * 1.8 + 32);
    }else if(mode == 'F'){
        input[strlen(input) - 1] = '\0';
        float value = atof(input);
        printf("Result: %0.2f degrees celcius.\n", (value - 32)/1.8);
    }else{
        printf("illegal format, please follow the format [<value>C] or [<value>F] as input.\n");
        main();
    }
    return 0;
}
