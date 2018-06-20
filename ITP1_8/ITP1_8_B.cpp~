#include<stdio.h>
#include<string.h>

int main(){
  int i;
  char string[1200];
  fgets(string, 1200, stdin);
  for(i=0;i<=(int)strlen(string);i++){
    if( 65 <= string[i] && string[i] <= 90 ){
      string[i] += 32;
    }else if(97 <= string[i] && string[i] <= 122 ){
      string[i] -= 32; 
    }
    //printf("%c", string[i]);
  }
  printf("%s", string);
  return 0;
}
