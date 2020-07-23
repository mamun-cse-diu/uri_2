#include<stdio.h>
int fibonacci(int);
int main()
{
    int n, i;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}
int fibonacci(int n){
    if(n == 0 || n == 1)
    return n;
    else
    return(fibonacci(n-1) + fibonacci(n-2));
}
