
#include<stdio.h>

void read(int a[50], int n)
{
    printf("Enter the tax paid by : \n");
    for(int i=0; i<n; i++)
    {
        printf("Tax payer %d : ", i+1);
        scanf("%d", &a[i]);
    }
}

void calculation(int a[50], int n)
{
    int c1 = 0, c2 = 0, sum = 0;
    float avg;
    for(int i=0; i<n; i++)
    {
        if(a[i]>250000)
            c1++;
        if(a[i]>50000 && a[i]<150000)
            c2++;
        sum = sum + a[i];
    }
    avg = (float)sum/n;
    printf("Total number of tax payers who paid tax more than 2.5 lakhs : %d\n", c1);
    printf("Total number of tax payers who paid tax between 50000 rupees to 150000 rupees : %d\n", c2);
    printf("Average tax collected = %f", avg);
}

void main()
{
    int n, a[50];
    printf("Enter the no. tax payers : ");
    scanf("%d", &n);
    read(a,n);
    calculation(a,n);
}
