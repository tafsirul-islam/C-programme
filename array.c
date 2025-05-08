//C programme #include<stdio.h>

int main() { // Array int rows,cols; printf("Enter row and column :\n"); printf("row = "); scanf("%d",&rows); printf("columns = "); scanf("%d",&cols); int matrix[rows][cols];

    printf("Enter your matrix value:\n");
    for( int row=0;row<rows;row++){
      for(int col=0;col<cols;col++){
      printf("Matrix[%d][%d] =",row,col);
       scanf("%d",&matrix[row][col]);
       
      }
    }
    
    
    printf("Matrix is = \n");
     for(int row=0;row<rows;row++){
      for(int col=0;col<cols;col++){
        printf("%d ",matrix[row][col]);
      }
      printf("\n");
    }
    
    printf("T Matrix is = \n");
     for(int row=0;row<rows;row++){
       for(int col=0;col<cols;col++){
         printf("%d ",matrix[col][row]);
      }
      printf("\n");
    }
    
    return 0;
    }