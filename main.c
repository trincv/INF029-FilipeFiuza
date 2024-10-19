#include <stdio.h>
#include "Views\StudentView.c"
#include "Views\GeralView.c"
#include "Person\Person.h"
#define TAM_STUDENT 3
#define TAM_TEACHER 3
#define CAD_SUCESS -1
#define CAD_FAIL -2

int QtdStudent = 0;

int main(){  
  
  Person Student_List[TAM_STUDENT];
  Person Teacher_List[TAM_TEACHER];
  int GeralOption = -1;

  while(GeralOption != 0){
    
    Geral_View();

    scanf("%d", &GeralOption);

    switch (GeralOption) {
    case 0:
      printf("Fechando o programa...\n");
      break;
    case 1:{
      int StudentOption = -1;
      while(StudentOption != 0){
        Student_View();
        scanf("%d", &StudentOption);
        switch(StudentOption){
          case 0:
            printf("Retornando...\n");
            break;
          case 1:{
            if(Student_Managment(QtdStudent,Student_List) == 0){
            QtdStudent++;
            printf("Cadastro concluído");
            } else
              printf("A lista esta cheia");
            break;
          }
          case 2:{
            for(int icont = 0; icont < QtdStudent; icont++)
            printf("%d - %d\n", icont + 1, Student_List[icont].identification);
            break;
          }
          default:
            printf("Opção inválida!\n\n");
            break;
        }
      }
    }
    case 2:
      break;
    default:
      printf("Opção inválida!\n\n");
    }
  }
}
