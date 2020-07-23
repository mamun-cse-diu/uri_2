#include <stdio.h>
void addNumbers(int i,int num);
int main() {
    int num,i=0;
    scanf("%d", &num);
    addNumbers(i,num);
    return 0;
}

void addNumbers(int i,int num) {
    if (i>num)
        return;
    if(i==0)
        printf("%d +",i+1);
    else if(i==1)
        printf(" x +");
    else if(i<num-1)
        printf(" x^%d +",i);
    else if(i==num-1)
        printf(" x^%d",i);
    addNumbers(i+1,num);
}
