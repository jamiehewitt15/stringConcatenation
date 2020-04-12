#include <stdio.h>
#include <mem.h>

int main( void ) {
    char in[5];
    char in2[5];
    char out[11];

    fgets(in,20,stdin);
    fgets(in2,20,stdin);
    if(in == NULL){ in[0] = '\0'; }
    if(in2 == NULL){ in2[0] = '\0'; }


    snprintf(out, 20, in);
    //strncpy(out, in,20);
    int index = strnlen(in, 20);
    if (out[index] == '\n'){
        index--;
    }
    for (int j = 0; j < strnlen(in2, 20); ++j) {
        out[index] = in2[j];
        printf("the letter is: %c\n", out[index]);
        index = index + 1;
    }
    printf("%c", out);
    return 0;
   }
