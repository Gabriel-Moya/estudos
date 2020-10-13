#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, x[10];

    for(i=1;i<20;i++){
        if(i%2!=0){
            x[i]=i;
            printf("\n%d", x[i]);
        }
    }

    return 0;
}
