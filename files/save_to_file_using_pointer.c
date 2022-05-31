#include<stdio.h>
#include<string.h>
typedef struct student{
   int id;
   char name[20];
   int marks;
}*e;




int main(){
    e *record;
 for(int i=0;i<10;i++){
    scanf("%d",&record[i]->id);
    scanf("%s",record[i]->name);
    scanf("%d",&record[i]->marks);
   }
 for(int i=0;i<10;i++){
    printf("%d\n",record[i]->id);
    printf("%s\n",record[i]->name);
    printf("%d\n",record[i]->marks);
   }

   return 0;

}
