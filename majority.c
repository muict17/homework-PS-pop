
#include<stdio.h>
int main(){
  int n,i,j;
  scanf("%d",&n);
  int m[n],r[n],count=0;
  for(i=0;i<n;i++){
    scanf("%d",&m[i]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(m[i]==m[j]){
        count++;
      }
    }
    r[i]=count;
    count=0;
  }
  int max=m[0];
  for(i=1;i<n;i++){
    if(r[i-1]<r[i]){
      max=m[i];
    }
  }
  printf("%d",max);
  return 0;
}
