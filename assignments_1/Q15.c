#include<stdio.h>

void read_array(int a[20], int n, char s[10])
{
    printf("Enter %d %s time : ", n, s);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void min_platform(int a[20], int d[20], int n)
{
    int min_p, max = 1;
    for(int i=0; i<n; i++)
    {
        min_p = 1;
        for(int j=i+1; j<n; j++)
        {
            if((a[i]>=a[j] && a[i]<=d[j]) || (a[j]>=a[i] && a[j]<=d[i]))
                min_p++;
        }
        if(min_p>max)
            max = min_p;
    }
    printf("Minimum no. of platforms required = %d", max);
}

void main()
{
    int a[20], d[20], n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n, "arrival");
    read_array(d,n, "departure");
    min_platform(a,d,n);
}

