#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
  int result[26]={};
  string str;
  while(!getline(cin,str).eof()){
    for(int i=0; i<(int)str.length(); i++){
      if(65<=str[i]&&str[i]<=90){
	str[i] += 32;
      }
      if(97<=str[i]&&str[i]<=122){
	result[str[i]-'a'] ++;
      }
    }
  }

  for(int i=0; i<26; i++){
    printf("%c : %d\n",i+'a',result[i]);
  }

  return 0;
}
