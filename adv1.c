//adv1
#include <stdio.h>
#include <math.h>

int main(){
  int i = 0;
  double e = 0;
  int n = 0;
  while(i <= 10){
    if(i == 0){
      n = 1;
    }else{
      n = i * n;
    }
    e = e + 1.0/n;
    i ++;
  }
  printf("%f\n", e);
}
