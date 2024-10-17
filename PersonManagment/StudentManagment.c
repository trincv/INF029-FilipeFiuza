#include <stdio.h>
#include "Person.h"


void Student_Managment(){
  int Is_Valid = 1;
  
  Person student(QtdStudent);

  printf("Insira a matrícula do aluno: ");

  while(Is_Valid == 1){
    scanf("%d", &student.identification);
    if(student.identification >= 10000000 && student.identification <= 100000000)
      Is_Valid = 0;
    else
      printf("Matrícula inválida! Insira novamente: ");
  }
  
}