#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
void swapping(int *x,int *y);
void pairswap(struct Node* head)
{
    struct Node* temp = head;
    while(temp!=NULL && temp->next!=NULL)
    {
        swapping(&temp->data,&temp->next->data);
        temp=temp->next->next;
    }
}
void swapping(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void insert(struct Node** head_reff, int new_data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_reff);
    (*head_reff)=new_node;
}
void print(struct Node* node)
{
    while(node!=NULL)
    {
        printf("%d\t",node->data);
        node=node->next;
    }
}
int main()
{
    struct Node*start=NULL;
    insert(&start,5);
    insert(&start,4);
    insert(&start,3);
    insert(&start,2);
    insert(&start,1);
    int n,x;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        push(&start,x);
    }


printf("List before swapping pairwise\n");
print(start);
pairswap(start);
printf("List after swapping pairwise\n");
print(start);
return 0;
}
