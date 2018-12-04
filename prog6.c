//prog6
#include <stdio.h>

int getSmallestFactor(int a){
    int i = 2;
    while(i*i <= a){
        if(a % i == 0){
            return i;
        }
        i++;
    }
    return 0;
}


int main(){
  int in, fact;
  scanf("%d", &in);

  while (1) {
    fact = getSmallestFactor(in);
    if(fact > 0){
      printf("%d*", fact);
      in = in / fact;
    }else{
      printf("%d\n", in);
      break;
    }
  }
}
