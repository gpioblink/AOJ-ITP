#include<stdio.h>

int main(){
  int amount;
  int ren1[3][10] = {{}};
  int ren2[3][10] = {{}};
  int ren3[3][10] = {{}};
  int ren4[3][10] = {{}};
  int ren,flat,room,value;
  
  scanf("%d", &amount);

  for(int i=0; i < amount; i++){
    scanf("%d %d %d %d",&ren,&flat,&room,&value);
    switch(ren){
    case 1:
      ren1[flat][room] = value;
      break;
    case 2:
      ren2[flat][room] = value;
      break;
    case 3:
      ren3[flat][room] = value;
      break;
    case 4:
      ren4[flat][room] = value;
      break;

    }
    
  }

  for(int i=0; i<3; i++){
    for(int j=0; j<10; j++){
      printf("%d ", ren1[i][j]);
    }
    printf("\n");
  }
  printf("####################\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<10; j++){
      printf("%d ", ren1[i][j]);
    }
    printf("\n");
  }
  printf("####################\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<10; j++){
      printf("%d ", ren1[i][j]);
    }
    printf("\n");
  }
  printf("####################\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<10; j++){
      printf("%d ", ren1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
