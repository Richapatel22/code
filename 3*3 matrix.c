
#include <stdio.h>

void main()
{
  int arr1[3][3],i,j,rows,sum;
  
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
  
           printf("%d\t",arr1[i][j]);
           
  }
   for(rows = 0; rows < i; rows++)
  	     {
   	         sum = sum + arr1[rows][rows];
  	     }
 
 	     printf("\n The Sum of Diagonal Elements of a Matrix =  %d", sum );
 printf("\n\n");
}
