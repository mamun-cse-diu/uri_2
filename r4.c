#include<stdio.h>
long int multi(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",multi(n));
    return 0;
}

long int multi(int n) {
    if (n>=1)
        return n*multi(n-1);
    else
        return 1;
}
