#include <stdio.h>

int main() {
    int n,a,b,c,d;
    scanf("%d", &n);
    d=n/1000;
    a=n/100%10;
    b=n/10%10;
    c=n%10;
    if ((d==3 && a==7)||(a==3 && b==7)||(b==3 && c==7)
    ||(d==7 && a==3)||(a==7 && b==3)||(b==7 && c==3))
    printf("YES");
    else
    printf("NO");
    return 0;
}
