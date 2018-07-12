#include<bits/stdc++.h>
using namespace std;

int main(){
  double x[1000],y[1000];
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>x[i];
  }

  for(int i=0; i<n; i++){
    cin>>y[i];
  }


  for(int p=0; p<4; p++){
    double sum;
    for(int i=0; i<n; i++){
      sum += pow(x[i]-y[i],p);
    }
    cout<<pow(sum,p)<<endl;
  }
  
}

