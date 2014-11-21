#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

 int main()
{ int A[20][20], B[20][20], C[20][20];
  int i,j,n;
  printf("Enter n: ");
  scanf("%d",&n);
 
  srand(time(NULL));        
  printf("Matrix A: \n");
  for (i=1; i<= n; i++)
          {printf("\n");
           for(j=1; j<= n; j++)
           {
     A[i][j]=1+rand() %3;       
     printf("%d ",A[i][j]);
    }
  }
  printf("\n");
  printf("Matrix B: \n");
  for (i=1; i<= n; i++)
  {printf("\n");
   for(j=1; j<= n; j++)
   {
     B[i][j]=1+rand() %3;   
     printf("%d ",B[i][j]);
    }
  }
  printf("\n");
  int k;
  printf("Matrix C: \n");
  for (i=1; i<= n; i++)
  for(j=1; j<=n; j++)
{   C[i][j]=0;
  for (k=1; k<=n; k++)
   C[i][j] += A[i][k] * B[k][j] - B[i][k] * A[k][j];
}
for (i=1; i<= n; i++)
 {  printf("\n");
   for(j=1; j<= n; j++) 
     printf("%d ",C[i][j]);
  }
  printf("\n");
      system("pause");
return 0;
}
