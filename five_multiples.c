#include <stdio.h>

int main()
{
    int a,s=0,i;
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
        s+=a;
        printf("%d ",s);
    }

    return 0;
}
