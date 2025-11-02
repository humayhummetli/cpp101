#include <stdio.h>

int main() {
    int n,a,b,c,d,t;
    scanf("%d",&n);
    a=n/1000;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    t=(a==b)+(a==c)+(a==d)+(b==c)+(b==d)+(c==d);
    if (t==2) printf("YES");
    else printf("NO");
    return 0;
    
}
