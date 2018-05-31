#include<stdio.h>

int main(){
  int count = 0;
  int result = 0;
  int n[1000];
  int x[1000];
  
  while(true){
    scanf("%d %d", &n[count], &x[count]);
    if(n[count] == 0 && x[count] == 0) break;
    count++;
  }
  for(int i = 0; i < count; i++){
    result = 0;
    for(int a=1; a <= n[i]; a++){
      for(int b=1; b <= n[i]; b++){
	for(int c=1; c <= n[i]; c++){
	  if(a != b && b !=c && c != a && a < b && b < c&& (a+b+c) == x[i]){
	    //printf("Est: %d %d %d\n",a,b,c);
	    result++;
	  }
	}
      }
    }
    printf("%d\n",result);
  }
}
