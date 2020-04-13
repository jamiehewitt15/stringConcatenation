///*** Question 1 ***///

#include <stdio.h>
#include <mem.h>

int main( void ) {
    char in[20];
    char in2[20];
    char out[40];

    fgets(in,20,stdin);
    for(int x=0; x<20; x++){
        if (in[x] =='\n'){
            in[x] = '\0';
        }
    }
    fgets(in2,20,stdin);
    for(int y=0; y<20; y++){
        if (in2[y] =='\n'){
            in2[y] = '\0';
        }
    }
    if(in == NULL){ in[0] = '\0'; }
    if(in2 == NULL){ in2[0] = '\0'; }


    snprintf(out, 20, in);
    //strncpy(out, in,20);
    int index = strnlen(in, 20);
//    if (out[index] == '\n'){
//        index--;
//    }
    for (int j = 0; j < strnlen(in2, 20); ++j) {
        out[index] = in2[j];
        index = index + 1;
    }
    printf("%s", out);
    return 0;
   }
