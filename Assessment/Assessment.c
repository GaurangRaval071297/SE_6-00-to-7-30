#include<stdio.h>
#include<conio.h>
void main()
{
   
   int a[2][2],b[2][2],result[2][2]= {0};
   int i,j,k;
  
    printf("\n Enter First Matrix of 2*2 Elements: ");
  
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("\n %d",&a[i][j]);
        }
    }
    
     printf("\n Enter Second Matrix of 3*3 Elements: ");
  
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("\n %d",&b[i][j]);
        }
    }
    
     for (i = 0; i < 2; i++) 
     {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
     printf("Resultant matrix:\n");
    
	for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    
        
    getch();
}