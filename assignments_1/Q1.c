#include<stdio.h>

void read_array(int a[10], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void pos_neg(int a[10], int n)
{
    int pos = 0, neg = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
            neg++;
        else
            pos++;
    }
    printf("Frequency of positive numbers : %d\nFrequency of negative numbers : %d", pos, neg);
}

void main()
{
    int a[10], n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    pos_neg(a,n);
}
