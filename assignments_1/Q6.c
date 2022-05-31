#include<stdio.h>

void read(int a[50], int n)
{
    printf("Enter the ranks of %d students : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void compute_rank(int a[50], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
}

void print(int a[50], int n)
{
    printf("Ranks in ascending order : ");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\nLowest Rank = %d\nHighest Rank = %d\n", a[0], a[n-1]);
}

void main()
{
    int n, a[50];
    printf("Enter the no. of students : ");
    scanf("%d", &n);
    read(a,n);
    compute_rank(a,n);
    print(a,n);
}
