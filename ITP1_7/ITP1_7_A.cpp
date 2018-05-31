#include<stdio.h>

int main(){
  int count = 0;
  int result = 0;
  int n[1000];
  int x[1000];
  
  while(true){
    scanf("%d %d", &n[count], &x[count]);
    count++;
  }
  for(int i = 0; i < count; i++){
    for(int a=1; a < n[i]; a++){
      for(int b=1; b < n[i]-a; b++){
	for(int c=1; c < n[i]-a-b; c++){
	  if(a != b && b !=c && c != a ){
	    printf("Est: %d %d %d\n",a,b,c);
	    result++;
	  }
	}
      }
    }
  }
  printf("%d",result);
}
