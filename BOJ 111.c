#include <stdio.h>

int main()
{
    int m;
    int n;
    int i;
    int score[1001];
    float average = 0;
    float sum = 0;

    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        score[0] = 0;
        scanf("%f", &score[i+1]);    
    }

    for(i=0; i<n; i++)
    {
        if(score[i]<=score[i+1])
        {
            m = score[i+1];
        }
    }

    for(i=0; i<n; i++)
    {
            score[i+1] = (score[i+1]/m)*100;
    }

    for(i=0; i<n; i++)
    {
        sum += score[i+1];
    }

    average = sum/(float)n;
    printf("%f", average);

}