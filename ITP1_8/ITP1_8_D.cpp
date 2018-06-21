#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
  string s,p;
  int flag = 0;
  getline(cin,s);
  getline(cin,p);

  string s2 = s+s;
  
  for(int i=0; i<(int)s2.length(); i++){
    for(int j=0; j<(int)p.length(); j++){
      //cout << "Try :" << s2[i+j] << " " << p[j]<<endl;
      if(s2[i+j]!=p[j]){
	break;
      }else if((int)p.length() == j+1){
	flag = 1;
      }
    }
    if(flag) break;
  }
  
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}

