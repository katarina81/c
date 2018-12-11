//prog16

#include <stdio.h>
#include <stdlib.h>

typedef struct company {
  personData ceo;
  personData employees[100];
} companyData;

typedef struct ceo {
  char name[30];
  char email[40];
} personData;

int main(){
  int i;
  companyData *ceo, *emailbook;
  int empNum = 3;
  ceo = (companyData*)malloc(sizeof(companyData) * empNum);
  emailbook = ceo;

  for(i = 0; i < 3; i++){
    printf("What is the name of ceo %i?\n", i);
    scanf("%s", ceo->name);
    printf("What is the email address of %s?\n", ceo->name);
    scanf("%s", ceo->email);
    ceo++;
}
printf("\n");
ceo = emailbook;
for(i = 0; i < 3; i++){
  printf("Friend %d: %s, ", i, ceo->name);
  printf("lives in %s\n", ceo->email);
  ceo++;
} }
