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
    
    if(col1!=row2){
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
    
    
    //Multiplication matrix
    int multiplication[row1][col2];
    for(int i=0;i<row1;i++){
      for(int j=0;j<col2;j++){
        multiplication[i][j] =0;
        for(int l=0;l<col1;l++){
          multiplication[i][j]+=matrix1[i][l]*matrix2[l][j];
        }
      }
    }
    
    printf("\nMultiplication matrix is =\n");
    for(int row=0;row<row1;row++){
     for(int col=0;col<col2;col++){
      printf("%d ",multiplication[row][col]);
     }
     printf("\n");
    }
    
    printf("\n");
   } 
   
    return 0;
}
