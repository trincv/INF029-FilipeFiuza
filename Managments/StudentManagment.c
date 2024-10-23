 #include <stdio.h>
 #include "../Person/DataValidationStudent.c"
 #include "../Person/CpfValidationStudent.c"

void Student_Managment(Person Student_List[], int QtdStudent){
  
  int is_valid = 1;
  
    printf("Digite a matricula do aluno: ");
    while(is_valid == 1){
      scanf("%d", &Student_List[QtdStudent].identification);
      if(Student_List[QtdStudent].identification >= 1 && Student_List[QtdStudent].identification <= 99)
        is_valid = 0;
      else 
      printf("Matricula invalida! Digite novamente: ");
    }
    
    printf("Digite o nome do estudante: ");
    scanf(" %49[^\n]", Student_List[QtdStudent].name);
    
    
    printf("Digite a data de nascimento DD/MM/YYYY: ");
    Date_Validation_Student(Student_List,QtdStudent);

    printf("Digite o CPF: ");
    CPF_Validation_Student(Student_List,QtdStudent);

    is_valid = 1;

    printf("Digite o genero M/F: ");
    
    while(is_valid == 1){
      scanf(" %c", &Student_List[QtdStudent].genre);
      if(Student_List[QtdStudent].genre != 'M' && Student_List[QtdStudent].genre != 'F')
        printf("Genero invalido! Digite novamente: ");
      else
        is_valid = 0;
    }
  
}