#include <stdio.h>
#include <math.h>
float f(float x) {
    return x + sinf(x);
}
int main() {
    float x;
    scanf("%f", &x);

    printf("%.4f\n", f(x));
    return 0;
}
