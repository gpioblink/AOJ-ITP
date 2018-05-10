#include<stdio.h>

int main(){
  int amount;
  long max=-2147483647,min=2147483647,sum=0;
  int input[10000];
  scanf("%d",&amount);
  for(int i=0;i<amount;i++){
    scanf("%d",&input[i]);
  }
  
  for(int i=0; i<amount; i++){
    if(input[i] > max)max=input[i];
    if(input[i] < min)min=input[i];
    sum += input[i];
  }
  printf("%ld %ld %ld\n",min,max,sum);
  return 0;
}
