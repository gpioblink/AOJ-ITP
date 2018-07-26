#include<bits/stdc++.h>
using namespace std;

struct dice{
  int u;
  int s;
  int e;
  int w;
  int n;
  int d;
};

int num;
dice move(dice, char);
bool judge(dice, dice);


int main(){
  cin>>num;
  dice dices[100];
  for(int i=0; i<num; i++){
    cin>>dices[i].u>>dices[i].s>>dices[i].e>>dices[i].w>>dices[i].n>>dices[i].d;
  }

  for(int h=0; h<num; h++){
    for(int i=h+1; i<num; i++){
      dice temp = dices[i];
      bool solved = false;
      for(int j=0; j<4; j++){
	if(judge(dices[h],temp)){cout<<"No"<<endl;solved = true; return 0;}
	temp = move(temp,'E');
	for(int k=0; k<4; k++){
	  temp = move(temp,'N');
	  if(judge(dices[h],temp)){cout<<"No"<<endl;solved = true; return 0;}
	  for(int l=0; l<4; l++){
	    temp = move(temp,'R');
	    if(judge(dices[h],temp)){cout<<"No"<<endl;solved = true; return 0;}
	  }
	}
      } 
    }
  }
  cout<<"Yes"<<endl;
}

bool judge(dice dice1, dice dice2){
  //cout<<dice1.u<<dice1.s<<dice1.e<<dice1.w<<dice1.n<<dice1.d<<endl;
  if(dice1.u == dice2.u &&dice1.s == dice2.s &&dice1.e == dice2.e &&dice1.w == dice2.w &&dice1.n == dice2.n &&dice1.d == dice2.d){
    return true;
  }
  return false;
}

dice move(dice dice1, char c){
    dice temp = dice1;
    if(c=='E'){     
      dice1.d = temp.e;
      dice1.w = temp.d;
      dice1.u = temp.w;
      dice1.e = temp.u;
    }else if(c=='N'){
      dice1.n = temp.u;
      dice1.u = temp.s;
      dice1.s = temp.d;
      dice1.d = temp.n;
    }else if(c=='S'){
      dice1.n = temp.d;
      dice1.u = temp.n;
      dice1.s = temp.u;
      dice1.d = temp.s;
    }else if(c=='W'){
      dice1.u = temp.e;
      dice1.w = temp.u;
      dice1.d = temp.w;
      dice1.e = temp.d;
    }else if(c=='R'){
      dice1.s = temp.w;
      dice1.w = temp.n;
      dice1.n = temp.e;
      dice1.e = temp.s;
    }
    return dice1;
}

