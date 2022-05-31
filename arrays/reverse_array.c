#include<stdio.h>
int reverse(int a[], int n){
int temp;
for(int i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
}
for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
}
}
int main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);
    }
    printf("The elements of an array are as follows:\n");
    for(int i=0;i<n;i++){

        printf("%d\t",a[i]);
    }
    reverse(a,n);

return 0;

}
