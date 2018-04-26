#include<bits/stdc++.h>

using namespace std;

int main() {
    int x,y,i=0;
    int result[6000];

    while(true){
      scanf("%d %d", &x,&y);
      if(x==0&&y==0){break;
      }else if(x < y){
        result[i] = x;
        result[i+1] = y;
	i += 2;
      }else{
        result[i] = y;
        result[i+1] = x;
        i += 2;
      }
    }

    for(int j=0; j<i; j+=2){
        printf("%d %d\n",result[j] ,result[j+1]);
        //if(j+2<i){printf("\n");}
    }
    return 0;
}
