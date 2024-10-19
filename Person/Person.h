#include <stdio.h>
#include "Birthday.h"
#define TAM_NOME 60

typedef struct people {
  int identification;
  char name[TAM_NOME];
  int cpf;
  char genre; 
  Birthday Birth;
} Person;
