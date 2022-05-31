#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, z;
    int first[10][10], second[10][10], multiply[10][10];
    int t;
    scanf("%d",&t);
    for(z=0;z<t;z++)
    {
         scanf("%d",&n);

         for (i = 0; i < n; i++)
         for (j = 0; j < n; j++)
         scanf("%d", &first[i][j]);

         for (i = 0; i < n; i++)
         for (j = 0; j < n; j++)
         scanf("%d", &second[i][j]);
        
         for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
         multiply[i][j]=0;
         for (k = 0; k < n; k++) {
         multiply[i][j] = multiply[i][j] + first[i][k]*second[k][j];
           }
        }
    }

        for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        printf("%d\t", multiply[i][j]);
          }
            printf("\n");
       }
           return 0;
}