#include<stdio.h>
int main()
{

    int x,n,posi=0,neg=0,even=0,odd=0;
    for(n=1;n<6;n++)
    {
        scanf("%d",&x);

        if(x%2==0)
            even++;
        else if(x%2!=0)
            odd++;

        if(x>0)
            posi++;
        else if(x<0)
            neg++;

    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",posi);
    printf("%d valor(es) negativo(s)\n",neg);

}


