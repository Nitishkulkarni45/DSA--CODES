#include<stdio.h>

void read_array(int a[20], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void compute(int a[20], int n, int m)
{
    int sum, j, x;
    printf("Sum of next m numbers for every element : ");
    for(int i=0; i<n; i++)
    {
        j = i+1;
        x = m;
        sum = 0;
        while(j<n && x!=0)
        {
            sum += a[j];
            j++;
            x--;
        }
        printf("%d ", sum);
    }
}

void main()
{
    int n, m, a[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    printf("Enter the value of m : ");
    scanf("%d", &m);
    compute(a,n,m);
}
