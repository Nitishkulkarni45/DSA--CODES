#include<stdio.h>

void read_no(int a[50], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void prime_no(int n)
{
    int flag = 1;
    if(n==0 || n==1)
        flag = 0;
    else
    {
        for(int i=2; i<(n/2); i++)
        {
            if(n%i==0)
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag==1)
        printf("%d\n",n);
}

void main()
{
    int n, a[50];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_no(a,n);
    printf("Prime numbers in the array are : \n");
    for(int i=0; i<n; i++)
        prime_no(a[i]);
}
