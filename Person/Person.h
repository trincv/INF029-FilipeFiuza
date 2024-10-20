#include <stdio.h>
#include "Birthday.h"
#define TAM_NOME 60

typedef struct people {
  int identification;
  char name[TAM_NOME];
  char cpf[20];
  char genre; 
  Birthday Birth;
} Person;
