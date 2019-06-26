#include <stdio.h>
#include<conio.h>

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s+=i;
    }
    printf("%d",s);
    return 0;
}
