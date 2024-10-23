 #include <stdio.h>
 #include "../Person/DataValidationTeacher.c"
 #include "../Person/CpfValidationTeacher.c"

void Teacher_Managment(Person Teacher_List[], int QtdTeacher){
  
  int is_valid = 1;
  
    printf("Digite a matricula do professor: ");
    while(is_valid == 1){
      scanf("%d", &Teacher_List[QtdTeacher].identification);
      if(Teacher_List[QtdTeacher].identification >= 1 && Teacher_List[QtdTeacher].identification <= 99)
        is_valid = 0;
      else 
      printf("Matricula invalida! Digite novamente: ");
    }
    
    printf("Digite o nome do professor: ");
    scanf(" %49[^\n]", Teacher_List[QtdTeacher].name);
    
    
    printf("Digite a data de nascimento DD/MM/YYYY: ");
    Date_Validation_Teacher(Teacher_List,QtdTeacher);

    printf("Digite o CPF: ");
    CPF_Validation_Teacher(Teacher_List,QtdTeacher);

    is_valid = 1;

    printf("Digite o genero M/F: ");
    
    while(is_valid == 1){
      scanf(" %c", &Teacher_List[QtdTeacher].genre);
      if(Teacher_List[QtdTeacher].genre != 'M' && Teacher_List[QtdTeacher].genre != 'F')
        printf("Genero invalido! Digite novamente: ");
      else
        is_valid = 0;
    }
  
}