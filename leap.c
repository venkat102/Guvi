#include <stdio.h>
#include<conio.h>

int main()
{
    int y;
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
        else
        {
            printf("Yes");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}
