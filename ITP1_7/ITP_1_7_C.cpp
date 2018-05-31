#include<stdio.h>

int main(){
  int table[100][100];
  int r,c,psum=0,asum=0;

  scanf("%d %d",&r,&c);

  for(int i=0; i < r; i++){
    for(int j=0; j < c; j++){
      scanf("%d",&table[i][j]);
    }
  }

  for(int i=0; i< r; i++){
    psum=0;
    for(int j=0; j< c; j++){
      printf("%d ",table[i][j]);
      psum+=table[i][j];
      asum+=table[i][j];
    }
    printf("%d\n",psum);
  }
  for(int i=0; i< c; i++){
    psum=0;
    for(int j=0; j< r; j++){
      psum+=table[j][i];
    }
    printf("%d ",psum);
  }
  printf("%d\n",asum);
}
