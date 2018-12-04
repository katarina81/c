//prog13

#include <stdio.h>

void exchange(int *x, int *y){
  int r;

  r = *x;
  *x = *y;
  *y = r;
}

int main(void){
  int x = 0;
  int y = 0;
  printf("整数値を入力して下さい:");
  scanf("%d", &x);
  printf("整数値を入力して下さい:");
  scanf("%d", &y);
  printf("変数xの値は%d, 変数yの値は%dです.\n", x ,y);
  exchange(&x, &y);
  printf("excange()を呼び出した後の変数xの値は%d, 変数yの値は%dです.\n", x, y);
}
