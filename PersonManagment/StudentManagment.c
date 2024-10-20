 #include <stdio.h>
 #include <string.h>
 #include "StudentManagment.h"
 #include "../Person/DataValidation.c"

int Student_Managment(Person Student_List[], int QtdStudent){
  
  int is_valid = 1;
  
    printf("Digite a matricula do aluno: ");
    while(is_valid == 1){
      scanf("%d", &Student_List[QtdStudent].identification);
      if(Student_List[QtdStudent].identification >= 1 && Student_List[QtdStudent].identification <= 99)
        is_valid = 0;
      else 
      printf("Matrícula inválida! Digite novamente: ");
    }
    
    printf("Digite o nome do estudante: ");
    scanf(" %49[^\n]", Student_List[QtdStudent].name);
    
    
    printf("Digite a data de nascimento DD/MM/YYYY: ");
    
    Date_Validation(Student_List,QtdStudent);
    
  return 0;
}