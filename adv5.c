//adv5

#include <stdio.h>

void myprintf(char str){
    putc(str, stdout);
}

void main(void){
  char str;
  printf("文字列を入力して下さい:");
  scanf("%s", &str);
  myprintf(&str);
}
