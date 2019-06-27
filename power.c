#include <stdio.h>
#include<conio.h>

int main()
{
    int n,k,t=1;
    scanf("%d %d",&n,&k);
    while(k!=0)
    {
        t*=n;
        --k;
    }
    printf("%d",t);
    return 0;
}
