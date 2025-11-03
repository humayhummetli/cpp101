#include <stdio.h>

int main() {
    int n,a,b,c,d;
    scanf("%d", &n);
    d=n/1000;
    a=n/100%10;
    b=n/10%10;
    c=n%10;
    if (d%2==0 && a%2==0 && b%2==0 && c%2==0)
    printf("YES");
    else printf("NO");
    return 0;
}
