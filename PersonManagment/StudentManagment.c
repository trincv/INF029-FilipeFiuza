 #include <stdio.h>
 #include <string.h>
 #include "StudentManagment.h"
 #include "../Person/DataValidation.h"

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
    // while(is_valid == 1){
    //   int tam;
    //   char data[256];
    //   scanf("%s", data);
    
    //   tam = strlen(data);
    
    // if(tam == 10){ // verificação do tamanho da string
    //     int form = 0;
    //     for(int icont = 0; icont < 10; icont++){ // verificação do formato da data
    //         if(icont == 2 || icont == 5){
    //             if(data[icont] == '/')
    //                 form++;
    //         } else
    //             if(data[icont] >= '0' && data[icont] <= '9')
    //                 form++;
    //     }
    //     if(form == 10){ // verificação da veracidade da data
         
    //         Student_List[QtdStudent].Birth.day = (data[0] - '0') * 10 + data[1] - '0'; 
    //         Student_List[QtdStudent].Birth.month = (data[3] - '0') * 10 + data[4] - '0';
    //         Student_List[QtdStudent].Birth.year = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + data[9] - '0';
    //         is_valid = 0;
    //       }
    //     else
    //         printf("\nData invalida! Digite novamente: \n");
    // }
    // else 
    //     printf("\nData invalida! Digite novamente: \n");
    // }
  return 0;
}