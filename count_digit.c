#include <stdio.h>
#include<conio.h>

int main()
{
    int t,i,v;
    scanf("%d",&v);
    while (v!=0)
    {
        t=v%10;
        v=v/10;
        i++;
    }
    printf("%d",i);
    return 0;
}
