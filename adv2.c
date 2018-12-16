//adv2

#include <stdio.h>

int power(int a, int b){
  int i = 1;
  int p = 1;

  while(i <= b){
    p = p * a;
    i++;
  }
  return p;
}

int main(){
  int i = 0;
  double arctan1 = 0;
  while(i < 10000){
    arctan1 += (double)power(-1,i) / (i*2 + 1);
    if(i % 100 == 0){
      printf("pi = %f\n", arctan1 * 4);
    }
    i++;
  }
}
