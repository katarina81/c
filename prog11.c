//prog11
#include <stdio.h>
#include <stdlib.h>
int main(){
  char* p = (char *)malloc(sizeof(char) *5);

  int i = 0;
  while(i <= 4){
    printf("整数値を５個入力して下さい。ひとつ入力するごとに改行して下さい。：");

    scanf("%s",str);
    *p = *str;
    p++;
  }
  int k = 0;
  while(k <= 4){
    printf("値：%d  ", p[k]);
    printf("アドレス:%p\n", &p[k]);
    k++;
  }
}
