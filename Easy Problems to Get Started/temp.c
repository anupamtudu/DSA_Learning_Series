#include<stdio.h>

int main()
{
    int n=7;
    for(int i=0;i<n;i++)
    {
        //printf("\n i = %d ",i);
        if(i%2==0)
        {
            for(int j=0;j<5;j++)
            {
                printf("%d ",(i*10)/2+j+1);
            }
        }
        else
        {
            for(int j=0;j<5;j++)
            {
                printf("%d ",((i-i/2)*10)-j);
            }
        }
        printf("\n");
    }
}