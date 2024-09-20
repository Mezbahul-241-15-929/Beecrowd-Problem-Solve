#include<stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            k=i+1;
        }
    }
    printf("%d\n",k);

}
