#include <stdio.h>
#include <mem.h>

int main( void ) {
    char in[20];
    char in2[20];
    char out[39];

    fgets(in,20,stdin);
    fgets(in2,20,stdin);
    if(in == NULL){ in[0] = '\0'; }
    if(in2 == NULL){ in2[0] = '\0'; }
    //snprintf(out, 20, in);

    strncpy(out, in,20);
    int index = strnlen(in, 20);
    for (int j = 0; j < strnlen(in2, 20); ++j) {
        out[index] = in2[j];
        index = index + 1;
    }
    printf(out);
    return 0;
   }
