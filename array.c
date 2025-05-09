#include<stdio.h>

int main()
{ 
    // Array
    int rows,cols;
    printf("Enter row and column :\n");
    printf("row = ");
    scanf("%d",&rows);
    printf("columns = ");
    scanf("%d",&cols);
    
    if(rows!=cols){
    printf("It's not possible.");
    }
    
    else{
    int matrix[rows][cols],c=0;
    printf("Enter your matrix value:\n");
    for( int row=0;row<rows;row++){
      for(int col=0;col<cols;col++){
      printf("Matrix[%d][%d] =",row,col);
       scanf("%d",&matrix[row][col]);
       
      }
    }
    
    
    printf("\nMatrix is = \n");
     for(int row=0;row<rows;row++){
      for(int col=0;col<cols;col++){
        printf("%d ",matrix[row][col]);
      }
      printf("\n");
    }
    
    //Transpose matrix
    printf("\nT Matrix is = \n");
     for(int row=0;row<rows;row++){
       for(int col=0;col<cols;col++){
         printf("%d ",matrix[col][row]);
      }
      printf("\n");
    }
    
    //symmetry matrix
    for(int row=0;row<rows;row++){
     for(int col=0;col<cols;col++){
      if(matrix[row][col]!=matrix[col][row]){
      c=c+1;
      }
     }
    }
    if(c==0)
    printf("\nIt is symmetry matrix.");
    else
    printf("\nIt's not symmetry matrix.");
    
    //diagonal elements
    int sum=0;
    printf("\n\nDiagonal elements is\n"); 
    for(int row=0;row<rows;row++){
     for(int col=0;col<cols;col++){
      if(col==row){
        printf("%d ",matrix[row][col]);
        sum+=matrix[row][col];
      }
     }
    }
    printf("\nSum of main diagonal elements =%d",sum);
    
    
    int sum1=0;
    printf("\n\nNondiagonal elements is\n"); 
    for(int row=0;row<rows;row++){
     for(int col=0;col<cols;col++){
      if(col!=row){
        printf("%d ",matrix[row][col]);
        sum1+=matrix[row][col];
      }
     }
    }
    printf("\nSum of non-diagonal elements =%d\n",sum1);
    
    
    
   } 
   
    return 0;
}
