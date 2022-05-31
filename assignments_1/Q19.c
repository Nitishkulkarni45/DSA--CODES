#include<stdio.h>

void read_array(int a[10], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void print_array(int a[20], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}

void bubble_sort(int a[20], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n-1-i); j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void main()
{
    int n, a[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    bubble_sort(a,n);
    printf("Array elements after sorting : ");
    print_array(a,n);
}
