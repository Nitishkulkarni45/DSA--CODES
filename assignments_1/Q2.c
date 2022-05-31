#include<stdio.h>

void read_array(int a[10], int n)
{
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void index(int a[10], int n, int key)
{
    int flag = 0, i = 0;
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("%d is present in the array and it's index = %d", key, i);
    else
        printf("%d was not found.", key);
}

void main()
{
    int a[10], n, key;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    read_array(a,n);
    printf("Enter the element to be searched : ");
    scanf("%d", &key);
    index(a,n,key);
}
