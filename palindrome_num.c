#include <stdio.h>
#include <conio.h>

int main()
{
    int n,t,nn=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        nn*=10;
        nn+=(t%10);
        t/=10;
    }
    if(n==nn)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}
