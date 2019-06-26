#include <stdio.h>
#include<conio.h>

int main()
{
    int i,n,s=0,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}
