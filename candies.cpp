#include <stdio.h>
int sa(int,int);
int main() {
    int n,m,a;
    scanf("%d%d",&n,&m);
    a=sa(n,m);
    printf("%d",a);
    return 0;
}
int sa(int n,int m){
    if(n>m) return n-m;
    else return m-n;
}
