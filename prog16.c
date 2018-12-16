//prog16

#include <stdio.h>
#include <stdlib.h>

typedef struct personData {
  char name[30];
  char email[40];
} personData;

typedef struct company {
  personData ceo;
  personData employees[100];
} companyData;

int main(){
  int i;
  personData *namebook, *emailbook;
  int empNum = 3;
  namebook = (personData*)malloc(sizeof(personData) * empNum);
  emailbook = namebook;

  for(i = 0; i < 3; i++){
    if(i == 0){
      printf("What is the name of ceo %i?\n", i);
      scanf("%s", namebook->name);
      printf("What is the email address of %s?\n", namebook->name);
      scanf("%s", namebook->email);
      namebook++;
    }else{
      printf("What is the name of employee %i?\n", i);
      scanf("%s", namebook->name);
      printf("What is the email address of %s?\n", namebook->name);
      scanf("%s", namebook->email);
      namebook++;
    }
  }

  printf("\n");
  namebook = emailbook;
  for(i = 0; i < 3; i++){
    if(i == 0){
      printf("ceo: %s, ", namebook->name);
      printf("email is %s\n", namebook->email);
      namebook++;
    }else{
      printf("employee %d: %s, ", i, namebook->name);
      printf("email is %s\n", namebook->email);
      namebook++;
    }
  }
}
