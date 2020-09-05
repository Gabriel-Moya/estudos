#include <stdio.h>

int main () {

    int i=2;

    while(i<=100){
        if (i%2==0)
        {
            printf("%d\n", i);
            i+=2;
        }
    }

    return 0;
}