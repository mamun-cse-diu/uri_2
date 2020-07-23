#include <stdio.h>
void addNumbers(int i,int num);
void Numbers(int j,int n);
int main() {
    int num,i=1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    addNumbers(i,num);
    Numbers(i,num-1);
    return 0;
}

void addNumbers(int i,int num) {
    if (i>num)
        return;
    printf("%d ",i);
    addNumbers(i+1,num);
}
void Numbers(int i,int num){
    if (i>num)
        return;
    printf("%d ",num);
    Numbers(i,num-1);
}
