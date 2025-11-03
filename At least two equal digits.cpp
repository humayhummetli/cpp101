#include <stdio.h>

int main() {
    int n,a,b,c,d,e,t;
    scanf("%d",&n);
    e=n/10000;
    a=n/1000%10;
    b=n/100%10;
    c=n/10%10;
    d=n%10;
    t=(a==b)+(a==c)+(a==d)+(b==c)+(b==d)+(c==d)+(e==a)+(e==b)+(e==c)+(e==d);
    if (t==0) printf("NO");
    else printf("YES");
    return 0;
    
}
