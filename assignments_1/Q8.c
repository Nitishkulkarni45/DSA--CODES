
#include<stdio.h>

typedef struct expenditure
{
    int month_no, exp;
}e;

void read(e a[12])
{
    printf("Enter month no. and corresponding expenditure : \n");
    for(int i=0; i<12; i++)
        scanf("%d %d", &a[i].month_no, &a[i].exp);
}
void compute(e a[12])
{
    float avg;
    int total_exp, max_exp, min_exp, max = 0, min = 0;
    max_exp = a[0].exp;
    min_exp = a[0].exp;
    total_exp = a[0].exp;
    printf("The months they spent more than 35000 rupees : ");
    if(a[0].exp>35000)
        printf("%d ", a[0].month_no);
    for(int i=1; i<12; i++)
    {
        total_exp += a[i].exp;
        if(a[i].exp>max_exp)
        {
            max_exp = a[i].exp;
            max = i;
        }
        if(a[i].exp<min_exp)
        {
            min_exp = a[i].exp;
            min = i;
        }
        if(a[i].exp>35000)
            printf("%d ", a[i].month_no);
    }
    avg = (float)total_exp/12;
    printf("\nMonth of the year they spent more : %d\n", a[max].month_no);
    printf("Month of the year they spent less : %d\n", a[min].month_no);
    printf("Average Expenditure = %f", avg);
}

void main()
{
    e a[12];
    read(a);
    compute(a);
}
