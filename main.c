#include <stdio.h>

int main( void ) {
    int buffer[20];
    char in = fgets(buffer,20,stdin);
    char in2 = fgets(buffer,20,stdin);
    char out;
    if(in == NULL){
        buffer[0] = '\0';
    }
    if(in2 == NULL){
        buffer[0] = '\0';
    }

    strcpy(out,i n);
    int index = strlen(in);

    while(index < 39) {
        out[index] = in2[index-strlen(in)];
        index = index + 1;
        }
    return 0;
   }
