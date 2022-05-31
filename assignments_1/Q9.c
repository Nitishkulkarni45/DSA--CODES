#include<stdio.h>

void read_data(int a[50], int n)
{
    printf("Enter the marks of %d students : ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void compute(int a[50], int n)
{
    int even = 0, odd = 0, max_count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
            even++;
        else
            odd++;
        if(a[i]==100)
            max_count++;
    }
    printf("No. of students with even marks - %d\n", even);
    printf("No. of students with odd marks - %d\n", odd);
    if(max_count>0)
        printf("Students have scored 100% marks.\nNo. of students who scored 100% marks - %d\n", max_count);
    else
        printf("No student has scored 100% marks.");
}

void main()
{
    int n, a[50];
    printf("Enter the number of students : " );
    scanf("%d", &n);
    read_data(a,n);
    compute(a,n);
}
