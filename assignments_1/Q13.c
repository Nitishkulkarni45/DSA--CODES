#include<stdio.h>

void read_array(int a[20], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void perfect_no(int a[20], int n)
{
    int sum, flag = 0, b[20], k=0;
    for(int i=0; i<n; i++)
    {
        sum = 1;
        for(int j=2; j<=a[i]/2; j++)
        {
            if(a[i]%j==0)
                sum += j;
        }
        if(sum==a[i])
        {
            flag = 1;
            b[k] = a[i];
            k++;
        }
    }
    if(flag)
    {
        printf("Perfect numbers in the array are : ");
        for(int i=0; i<k; i++)
            printf("%d ", b[i]);
    }
    else
        printf("No perfect number exist in the array.");
}

void main()
{
    int n, a[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    perfect_no(a,n);
}
