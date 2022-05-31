#include<stdio.h>

typedef struct flats
{
    int units;
    float amt;
}f;

void read_data(f a[20], int n)
{
    printf("Enter units consumed by : \n");
    for(int i=0; i<n; i++)
    {
        printf("Flat %d : ", i+1);
        scanf("%d", &a[i].units);
    }
}

void compute(f a[20], int n)
{
    printf("\nTotal bill to be paid by each flat : \n");
    for(int i=0; i<n; i++)
    {
        if(a[i].units<=100)
            a[i].amt = 1.5*a[i].units;
        else if(a[i].units<=250)
                a[i].amt = 1.5*100 + 2.3*(a[i].units-100);
             else if(a[i].units<=600)
                     a[i].amt = 1.5*100 + 2.3*150 + 4.0*(a[i].units-250);
                  else if(a[i].units>600)
                          a[i].amt = 1.5*100 + 2.3*150 + 4.0*350 + 5.5*(a[i].units-600);
        printf("Flat no.%d = %f\n", i+1, a[i].amt);
    }
}

void main()
{
    int n;
    f a[20];
    printf("Enter the no. of flats : ");
    scanf("%d", &n);
    read_data(a,n);
    compute(a,n);
}
