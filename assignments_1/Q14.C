#include<stdio.h>

void read_array(int a[20], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void eq_index(int a[20], int n)
{
    int r_sum = 0, l_sum = 0;
    int m = n/2;
    for(int i=0; i<m; i++)
        l_sum += a[i];
    for(int i=n-1; i>m; i--)
        r_sum += a[i];
    if(r_sum>l_sum)
    {
        while(r_sum>l_sum && m<n-1)
        {
            r_sum -= a[m+1];
            l_sum += a[m];
            m++;
        }
    }
    else
    {
        while(r_sum<l_sum && m>0)
        {
            r_sum += a[m];
            l_sum -= a[m-1];
            m--;
        }
    }
    if(r_sum == l_sum)
       printf("Equilibrium index = %d", m);
    else
        printf("No equilibrium index.");
}

void main()
{
    int n, a[20];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    eq_index(a,n);
}
