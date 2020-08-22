#include <stdio.h>
#include <math.h>

int main() {

    int h, km;
    float gasto;
    scanf("%d %d", &h, &km);

    gasto=((h*km)/12);

    printf("%.3f\n", gasto);

    return 0;
}
