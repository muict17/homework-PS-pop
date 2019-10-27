#include <stdio.h>

int main() {
  int row,col;
  printf("Input number of Rows: ");
  scanf("%d",&row);
  printf("Input number of Columns: ");
  scanf("%d",&col);
  int m[row][col];
  printf("Input element\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("element - [%d],[%d]: ",i,j);
      scanf("%d",&m[i][j]);
    }
  }
  printf("The matrix is: \n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d ",m[i][j]);
    }
    printf("\n");
  }
  int count=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(i==j){
        if(m[i][j]==1){count++;}
      }
      else{
        if(m[i][j]==0){count++;}
      }
    }
  }
  if(count==row*col){printf("This is an identity matrix");}
  else{printf("this is not..");}
  return 0;
}
