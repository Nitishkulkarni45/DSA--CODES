#include<stdio.h>

typedef struct employee
{
    int exp;
    float salary;
}emp;

void read(emp a[10], int n)
{
    printf("Enter the experience of : \n");
    for(int i=0; i<n; i++)
    {
       printf("Employ %d : ", i+1);
       scanf("%d", &a[i].exp);
    }
}

void compute(emp a[50], int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i].exp>=5 && a[i].exp<=7)
            a[i].salary = 10600 + (10600 * 0.1);
        else if(a[i].exp>=8 && a[i].exp<=10)
                a[i].salary = 21300 + (21300 * 0.2);
             else if(a[i].exp>10)
                    a[i].salary = 32100 + (32100 * 0.3);
    }
}

void print(emp a[50], int n)
{
    printf("Salary of employees : \n");
    for(int i=0; i<n; i++)
    {
        printf("Employee %d - Rs.%f\n", i+1, a[i].salary);
    }
}

void main()
{
    int n;
    emp a[50];
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    read(a, n);
    compute(a,n);
    print(a,n);
}
