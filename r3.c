#include <stdio.h>
void mm(int n, int arr[],int i,int j);
int main() {
    int n,i,j;
    scanf("%d", &n);
    j = n-1;
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    mm(n,arr,0,j);
    return 0;
}

void mm(int n, int arr[],int i,int j) {

    if (i>n/2)
        return;
    printf("%d %d\n",arr[i],arr[j]);
    mm(n,arr,i+1,j-1);
}
