#include <stdio.h>
#include "Views\StudentView.c"
#include "Views\GeralView.c"
#include "Person\Person.h"
#include "PersonManagment\StudentManagment.c"

#define TAM_STUDENT 3
#define TAM_TEACHER 3

int main(){  
  int QtdStudent = 0;
  Person Student_List[TAM_STUDENT];
  //Person Teacher_List[TAM_TEACHER];

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
            if(QtdStudent == TAM_STUDENT)
              printf("\nA lista esta cheia\n");
            else{
              Student_Managment(Student_List,QtdStudent);
              QtdStudent++;
              printf("\nCadastro concluído\n");
            }
          break;
          }
          case 2:{
            printf("\n");
            for(int icont = 0; icont < QtdStudent; icont++){
              printf("%d - %d", icont + 1, Student_List[icont].identification);
              printf(" // %s", Student_List[icont].name);
              printf(" // %02d/", Student_List[icont].Birth.day);
              printf("%02d/", Student_List[icont].Birth.month);
              printf("%d", Student_List[icont].Birth.year);
              printf(" // %s", Student_List[icont].cpf);
              printf(" // %c \n", Student_List[icont].genre);
            }
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
// int Student_Managment(Person Student_List[], int QtdStudent){
  
//   int is_valid = 1;
  
//   printf("Digite a matricula do aluno: ");
//   while(is_valid == 1){
//     scanf("%d", &Student_List[QtdStudent].identification);
//     if(Student_List[QtdStudent].identification >= 10000000 && Student_List[QtdStudent].identification <= 99999999)
//       is_valid = 0;
//     else 
//     printf("Matrícula inválida! Digite novamente: ");
//   }
//   return 1;
// }