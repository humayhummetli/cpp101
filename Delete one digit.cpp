#include <stdio.h>

int main() {
    int n,a,b,c,m1,m2,m3,max;
    scanf("%d",&n);
    a=n/100;
    b=n/10%10;
    c=n%10;
    m1=a*10+b;
    m2=a*10+c;
    m3=b*10+c;
    max = m1;
    if (m2 > max) max = m2;
    if (m3 > max) max = m3;

    printf("%d",max);
    return 0;
}
