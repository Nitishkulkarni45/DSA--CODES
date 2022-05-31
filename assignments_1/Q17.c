#include<stdio.h>

void read_array(int a[10], int n, char s)
{
    printf("Enter %d numbers of array %c : ", n, s);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void exchange_array(int a[20], int b[20], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void print_array(int a[20], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}

void main()
{
    int n, a[20], b[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n,'A');
    read_array(b,n,'B');
    exchange_array(a,b,n);
    printf("Array elements of A : ");
    print_array(a,n);
    printf("\nArray elements of B : ");
    print_array(b,n);
}
