#include<stdio.h>
int main()
{
    int n,i=0,j,a[200],r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        a[i]=r;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
    return 0;
}
