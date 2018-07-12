#include<bits/stdc++.h>
using namespace std;

int main(){
  
  while(true){
    string s,t1,t2;
    int m, h,count=0;
    cin>>s;
    
    count = (int)s.length();
     if(s == "-") break;
     
     cin>>m;
    for(int i=0; i<m; i++){
      cin>>h;
      t1 = s.substr(0,h);
      t2 = s.substr(h,count-1);
      s = t2 + t1;
      //cout<<t2<<t1<<endl;
    }
    cout<<t2<<t1<<endl;
  }
 
}
