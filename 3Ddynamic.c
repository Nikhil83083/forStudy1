 #include <stdio.h>
#include<malloc.h>
int main() 
{
  int columns,plane, i, counter1,rows,counter;
  int ***p=NULL;
  printf("columns= elements\n rows=1D Array\n plane=2DArray\n") ;
printf("\nHow many plane you want to enter\n");
    scanf("%d",&plane) ;
    printf("\nHow many columns you want to enter\n");
    scanf("%d",&columns) ;
printf("\nHow many rows  you want to enter\n");
    scanf("%d",&rows) ;
p=((int**)malloc(rows*sizeof(int*)));
    if(p==NULL)
    {
        printf("memory allocation failed") ;
        return -1;
    }
    
for(i= 0; i < plane; i++)
{
p[i]=((int*)malloc(columns*sizeof(int)));
if(p[i]==NULL)
    {
        printf("memory allocation failed") ;
        return -1;
    }

for(counter= 0; counter < rows; counter++)
{
p[i][counter]=((int*)malloc(columns*sizeof(int)));
if(p[i][counter]==NULL)
    {
        printf("memory allocation failed") ;
        return -1;
    }
   


    for(counter1= 0; counter1 < columns; counter1++)
    {

    printf("\nEnter element %d %d %d\n",i,counter,counter1+1);
     scanf("%d",&p[i][counter][counter1]); 
}
}
}
for(i= 0; i < plane; i++){
for(counter= 0; counter < rows; counter++){
    for(counter1= 0; counter1 < columns; counter1++){
printf("\nEntered element %d %d %d:\n%d",i,counter,counter1+1,p[i][counter][counter1]);
   
} 
} 
}

  
for(i= 0; i < plane; i++)
{
for(counter= 0; counter < rows; counter++)
{
    free(p[i][counter]) ;
    p[i][counter]=NULL;
}
    free(p[i]);
    p[i]=NULL;

}

     free(p);
     p=NULL;
    return 0;
}