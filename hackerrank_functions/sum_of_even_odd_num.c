#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

int n,a,sum1=0,sum2=0,i;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d",&n);

    

    for(i=1;i<=n;i++)

    

    {

        scanf("%d",&a);

        if (a%2==0)

        {

            sum1=sum1+a;

        }

        else{

            sum2=sum2+a;

        }

        

    }

    printf("Sum of even numbers=%d\n",sum1);

    printf("Sum of odd numbers=%d",sum2);

    return 0;

}