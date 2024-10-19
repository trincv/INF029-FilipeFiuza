#include <stdio.h>
#include "StudentManagment.h"


int Student_Managment(int QtdStudent, Person Student_List){
  
  int is_valid = 1;
  
  printf("Digite a matricula do aluno: ");
  while(is_valid == 1){
    scanf("%d", &Student_List[QtdStudent].identification);
    if(Student_List[QtdStudent].identification >= 10000000 && Student_List[QtdStudent].identification <= 99999999)
      is_valid = 0;
    else 
    printf("Matrícula inválida! Digite novamente: ");
  }
  return 0;
}