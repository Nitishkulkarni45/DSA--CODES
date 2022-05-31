#include<stdio.h>

void read_array(int a[20], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void display_array(int a[20], int n)
{
    printf("Array elements are : ");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void max_digit(int a[20], int n)
{
    int b[10], j, k, max, sum = 0;
    for(int i=0; i<n; i++)
    {
        j = 0;
        while(a[i]!=0)
        {
            b[j] = a[i]%10;
            a[i] = a[i]/10;
            j++;
        }
        max = b[0];
        for(k=0; k<j; k++)
        {
            if(b[k]>max)
                max = b[k];
        }
        printf("Maximum digit in a[%d] = %d\n", i, max);
        sum += max;
    }
    printf("Sum = %d", sum);
}

void main()
{
    int n, a[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    display_array(a,n);
    max_digit(a,n);
}


