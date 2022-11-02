#include <stdio.h>
int main()
{
    int i,j,k,m,sum = 0;
    for (i = 1; i <= 40; i++)
    {
        for (j = 1; j <= 40 ; j++)
        {
            for (k = 1 ; k <=40 ; k++)
            {
                for (m = 1 ; m <=40 ; m++)
                {
                    if (i + j + k +m== 40 && 10 * i + 5 * j + k+m*2 == 100)
                    {
                        sum++ ;
                    }
                }
            }
        }
    }
    printf("%d",sum) ;
    return 0;

}