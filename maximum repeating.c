#include<stdio.h>
int main(){
  int n,i,j;
  scanf("%d",&n);
  int k[n],r[n+1][2];
  for(i=0;i<n;i++){
    do{
    scanf("%d",&k[i]);
    }while(k[i]>n);
  }
  for(i=0;i<n+1;i++){
    r[i][0]=i;
    r[i][1]=0;
  }
  for(i=0;i<n+1;i++){
    for(j=0;j<n;j++){
      if(r[i][0]==k[j]){
        r[i][1]++;
      }
    }
  }
  for(i=n;i>=0;i--){
    if(r[i][1]>=2){
      printf("%d\n",r[i][0]);
      break;
    }
  }
  return 0;
}
