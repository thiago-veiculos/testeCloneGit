#include <stdlib.h>
#include <stdio.h>

int main(){

    int x;

    printf("> Digite a idade: ");
    scanf("%d", &x);

    x--;

    printf("> idade mudada:%d\n", x);
    
    x++;
    
    printf("> idade original: %d\n", x);


    return 0;
}

/////////////////////////////////////////
