#include <stdio.h>

int main()
{
    int temporaryCost, num, i;
    int realCost = 0;

    scanf("%d", &temporaryCost);
    scanf("%d", &num);

    for (i=0; i<num; i++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        realCost += a*b;
    }

    if(temporaryCost == realCost)
    {
        printf("Yes");
    }

    else printf("No");

    return 0;

}


int marine(firemarine)
{
    int firemarine;
    
}
