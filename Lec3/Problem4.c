#include <stdio.h>
#define NULLCHARSIZE 1

int main(void){
  char x[]="abc";
  char y[]="def";
  char z[50];

  int sizeOfX = sizeof(x)/sizeof(x[0]) - NULLCHARSIZE ;
  int sizeOfY = sizeof(y)/sizeof(y[0]) - NULLCHARSIZE ;
  int global_z_counter = 0;
  
  for (int i = 0; i< sizeOfX ;i++){
    z[global_z_counter] = x[i];
    global_z_counter++;
  }
  
  for (int j = 0; j< sizeOfY; j++){
    z[global_z_counter] = y[j];
    global_z_counter++;
  }
  z[global_z_counter] = '\0';
  
  printf("文字列 %s と %s をつなげると %s になる\n",x,y,z);
  return 0;
}