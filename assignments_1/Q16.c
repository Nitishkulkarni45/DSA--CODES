#include<stdio.h>

void read_array(int a[10], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void reverse_array(int a[10], int n)
{
    int b[20];
    for(int i=n-1, j=0; i>=0; i--, j++)
    {
        b[j] = a[i];
    }
    for(int i=0; i<n; i++)
    {
        a[i] = b[i];
    }
}

void print_array(int a[20], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}

void main()
{
    int n, a[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    reverse_array(a,n);
    printf("Reversed array -> ");
    print_array(a,n);
}
