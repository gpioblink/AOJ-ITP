#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
  long result[1000];
  int length=0,temp;
  char input[10000];

  while(true){
    cin >> input;
    if(strlen(input) == 1 && (input[0] - '0') == 0) break;
    temp=0;
    for(int i=0; i<(int)strlen(input); i++){
      temp += input[i] - '0';
    }
    result[length] = temp;
    length++;
  }
  for(int i=0; i<length; i++){
    cout<<result[i]<<endl;
  }
  return 0;
}
