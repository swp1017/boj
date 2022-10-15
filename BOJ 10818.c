#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d", &n);
    int num[n+1];
    int max = -1000000;
    int min = 1000000;

    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
        if(num[i]>max)
            max = num[i];

        if(num[i]<min)
            min = num[i];
    }
    
    printf("%d %d", min, max);
    return 0;

}
