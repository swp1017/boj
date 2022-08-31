#include <stdio.h>

int main()
{
    int h,m,i;
    scanf("%d %d", &h, &m);

    if(m-45<0)
    {
        i = 45 - m;
        m = 60 - i;
         if(1<=h)
        {
            h -= 1;
        }
        else
        {h=23;}
        printf("%d %d", h, m);

    }

    else if(m>45)
    {
        m = 60-m;
         if(1<=h)
        {
            h -= 1;
        }
        else
        {h=23;}
        printf("%d %d", h, m);

    }
    
    return 0;

}