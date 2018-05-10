#include<stdio.h>
#include<math.h>

int main(){
  int a,b,count=0;
  char op;
  int results[20000];
  while(true){
    scanf("%d %c %d", &a, &op, &b);
    if(op == '?'){
      break;
    }

    switch(op){
     case '+':
       results[count] = a+b;
       break;
     case '-':
       results[count] = a-b;
       break;
     case '*':
       results[count] = a*b;
       break;
     case '/':
       results[count] = a/b;
       break;
    }
    count++;
  }
  for(int i=0; i < count; i++){
    printf("%d\n", results[i]);
  }
}
