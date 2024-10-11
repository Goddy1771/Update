#include<stdio.h>
int main(){
    int a[4]={12,6,8,16};
    int i;
    int n=4;
    a[2]=40;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
    }