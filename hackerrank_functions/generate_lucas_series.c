#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

void lucas(int N);

int main ()

    

{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    

    int N;

    scanf("%d",&N);

    if (0<=N && N<=40) 

    { 

    

    lucas(N);

    }

    

        else 

            printf("Invalid input");

    return 0;

}

    void lucas(int N)

    {

        int i,d1=2,d2=1,d3;

        if (N==1)

            printf("%d",d1);

        else

        {

            printf("%d %d ",d1,d2);

    for(i=3;i<=N;i++)

    {

        d3=d1+d2;

        printf("%d ",d3);

        d1=d2;

        d2=d3;

    }

        }

    }