#include<stdio.h>

int main(){
  int h[100000];
  int w[100000];
  int count = 0;
  while(true){
    scanf("%d %d", &h[count], &w[count]);
    if(h[count] == 0 && w[count] == 0) break;
    count ++;
  }

  for(int i=0; i < count; i++){
    for(int tate=0; tate < h[i]; tate++){
      for(int yoko=0; yoko < w[i]; yoko++){
	printf("#");
      }
      printf("\n");
    }
    printf("\n");
  }
  
  return 0;
}
