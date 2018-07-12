#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cctype>
#include<cstdio>
using namespace std;

int main(){
  int cnt=0;
  string w,t,end="END_OF_TEXT";
  
  getline(cin,w);
  transform(w.begin(),w.end(),w.begin(), ::toupper);
  while(cin >> t){
    if(t==end) break;
    transform(t.begin(),t.end(),t.begin(), ::toupper);
    if(t==w){ cnt++;}
  }
  cout<<cnt<<endl;
}
