#include <iostream>

int main() {
  int notas[4] = {8,10,7,8};
  int *x;

  x= &notas[0]; //serve apenas notas
  for(int i=0; i<4; i++){
    printf("|%d|", *(x+i));
  }
  
  *(x+1)= 15;
  printf("\n");
  for(int i=0; i<4; i++){
    printf("|%d|",*(x+i));
  }
  
}