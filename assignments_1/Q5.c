#include<stdio.h>

typedef struct student
{
    int id, no_days, penalty;
}s;

void read(s a[50], int n)
{
    printf("Enter student's id and no. of days after the deadline :\n");
    for(int i=0; i<n; i++)
        scanf("%d %d", &a[i].id, &a[i].no_days);
}

void compute(s a[50], int n)
{
    int i=0, total_p = 0, max_p, min_p;
    float avg_penalty;
    for(i=0; i<n; i++)
    {
        a[i].penalty = 2*a[i].no_days;
        total_p = total_p + a[i].penalty;
    }
    avg_penalty = (float)total_p/n;
    max_p = a[0].penalty;
    min_p = a[0].penalty;
    for(i=1; i<n; i++)
    {
        if(a[i].penalty>max_p)
            max_p = a[i].penalty;
        if(a[i].penalty<min_p)
            min_p = a[i].penalty;
    }
    printf("Average Penalty = %f\n", avg_penalty);
    printf("Max Penalty = %d\nMin Penalty = %d\n", max_p, min_p);
    printf("Total Penalty = %d\n", total_p);
}

void main()
{
    int n;
    s a[50];
    printf("Enter the number of students : ");
    scanf("%d", &n);
    read(a,n);
    compute(a,n);
}
