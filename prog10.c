//prog10
#include <stdio.h>
#include <stdlib.h>
int main(){
  int* p = (int *)malloc(sizeof(int) *5);

  int i = 0;
  while(i <= 4){
    printf("整数値を５個入力して下さい。ひとつ入力するごとに改行して下さい。：");
    scanf("%d", &p[i]);
    i++;
  }
  int k = 0;
  while(k <= 4){
    printf("値：%d  ", p[k]);
    printf("アドレス:%p\n", &p[k]);
    k++;
  }
}
