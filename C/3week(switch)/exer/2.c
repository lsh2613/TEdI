#include <stdio.h>
int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", n-m>0 ? n-m : m-n);
    printf("%d", n>m ? n-m : m-n);
}