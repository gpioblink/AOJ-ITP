#include<bits/stdc++.h>
using namespace std;

int main(){
  string query,strconv,str,p;
  int q,a,b;

  cin>>str;
  cin>>q;
  
  for(int i=0; i<q; i++){
    cin>>query;
    cin>>a>>b;
    if(query == "print"){
      cout<<str.substr(a,b)<<endl;
    }else if(query == "reverse"){
      reverse(str.begin()+a-1,str.begin()+b);
    }else if(query == "replace"){
      cin>>p;
      str.replace(a-1,b,p);
      cout<<strconv.substr(a,b)<<endl;
    }
  }
}
