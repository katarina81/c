//prog7
#include <stdio.h>
int main(){
  int a;
  int i = 1;
  int res = 1;
  scanf("%d", &a);

  if(a <= 0){
    printf("0\n");
  }else{

    while(i <= a){
      res = res * i;
      i++;
   }
    printf("%d\n", res);
  }
}
