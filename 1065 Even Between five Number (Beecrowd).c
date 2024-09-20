#include<stdio.h>
int main()
{
    int x,i,even=0;
    for(i=1;i<6;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
            even++;
    }
    printf("%d valores pares\n",even);
}
