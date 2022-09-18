#include <stdio.h>

int main()
{
    int n,i;
    int num;
    int box[100];
    int max;

    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &num);
        box[i] = num;
        printf("%d\n", box[i]);
    }

    return 0;
}


