#include <stdio.h>
int main() {
    int n,a,b,c;
    long long m;
    scanf("%d",&n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;

    if(a >= b && b >= c)           // a b c
        m = (a*100 + b*10 + c) * (a*100 + b*10 + c);
    else if(a >= c && c >= b)      // a c b
        m = (a*100 + c*10 + b) * (a*100 + c*10 + b);
    else if(b >= a && a >= c)      // b a c
        m = (b*100 + a*10 + c) * (b*100 + a*10 + c);
    else if(b >= c && c >= a)      // b c a
        m = (b*100 + c*10 + a) * (b*100 + c*10 + a);
    else if(c >= a && a >= b)      // c a b
        m = (c*100 + a*10 + b) * (c*100 + a*10 + b);
    else                            // c b a
        m = (c*100 + b*10 + a) * (c*100 + b*10 + a);

    printf("%lld", m);

    return 0;
}
