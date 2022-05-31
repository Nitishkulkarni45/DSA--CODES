#include <stdio.h>
#include <math.h>

int fac(int x)
{
    int i,fac=1;
    for(i=1;i<=x;i++)
        fac=fac*i;
    return fac;
}

int main()
{
    float x,sum=0;
    int i,j,limit;

    scanf("%f",&x);

    scanf("%d",&limit);

  

    for(i=1,j=1;i<=limit;i++,j=j+2)
    {
        if(i%2!=0)
        {
            sum=sum+pow(x,j)/fac(j);
        }
        else
            sum=sum-pow(x,j)/fac(j);
    }

    printf("%.2f",sum);
    return 0;
}