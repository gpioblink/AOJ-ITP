#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, s[1000];
  
  while(true){
    cin>>n;
    int sum=0;
    if(n==0)break;
    for(int i=0; i<n; i++){
      cin>>s[i];
      sum+=s[i];
    }
    int bunsan;
    for(int i=0; i<n; i++){
      bunsan += pow(s[i]-(sum/n),2);
    }
    bunsan /= n;
    cout<<pow(bunsan,0.5)<<endl;
  }
  
}

