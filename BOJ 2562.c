    #include <stdio.h>

    int main()
    {
        int i;
        int num[10];
        int max = 1;
        int max_num = 0;

        for(i=0; i<9; i++)
        {
            scanf("%d", &num[i]);
            if(num[i]>max)
            {
                max = num[i];
                max_num = i+1;
            }
            
        }
        

        printf("%d \n %d", max, max_num);
        return 0;
    }