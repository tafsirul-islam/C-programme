#include<stdio.h>

int main()
{ 
    // Array
    int row1,col1;
    printf("Enter frist matrix row and column :\n");
    printf("row = ");
    scanf("%d",&row1);
    printf("columns = ");
    scanf("%d",&col1);
    
    int row2,col2;
    printf("Enter second matrix row and column :\n");
    printf("row = ");
    scanf("%d",&row2);
    printf("columns = ");
    scanf("%d",&col2);
    
    if(row1!=col1 || row2!=col2 || row1!=row2 || col1!=col2){
    printf("It's not possible.");
    }
    
    else{
    int matrix1[row1][col1];
    printf("Enter your frist matrix value:\n");
    for( int row=0;row<row1;row++){
      for(int col=0;col<col1;col++){
      printf("Matrix[%d][%d] =",row,col);
       scanf("%d",&matrix1[row][col]);
       
      }
    }
    int matrix2[row2][col2];
    printf("Enter your second matrix value:\n");
    for( int row=0;row<row2;row++){
      for(int col=0;col<col2;col++){
      printf("Matrix[%d][%d] =",row,col);
       scanf("%d",&matrix2[row][col]);
       
      }
    }
    
    printf("\nFrist matrix is = \n");
     for(int row=0;row<row1;row++){
      for(int col=0;col<col1;col++){
        printf("%d ",matrix1[row][col]);
      }
      printf("\n");
    }
    
    printf("\nSecond matrix is = \n");
     for(int row=0;row<row2;row++){
      for(int col=0;col<col2;col++){
        printf("%d ",matrix2[row][col]);
      }
      printf("\n");
    }
    
    //Addition matrix
    printf("Addition matrix =\n");
    for(int row=0;row<row1;row++){
      for(int col=0;col<col1;col++){
       printf("%d ",matrix1[row][col] + matrix2[row][col]);
      }
      printf("\n");
    }
    
    //Subtraction matrix
    printf("Subtraction matrix frist -second =\n");
    for(int row=0;row<row1;row++){
      for(int col=0;col<col1;col++){
       printf("%d ",matrix1[row][col] - matrix2[row][col]);
      }
      printf("\n");
    }
    
    //Subtraction matrix
    printf("Subtraction matrix second -frist =\n");
    for(int row=0;row<row1;row++){
      for(int col=0;col<col1;col++){
       printf("%d ",matrix2[row][col] - matrix1[row][col]);
      }
      printf("\n");
    }
    
    printf("\n");
   } 
   
    return 0;
}
