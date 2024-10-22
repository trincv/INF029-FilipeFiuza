#include <stdio.h>
#include "Views/StudentView.c"
#include "Views/GeralView.c"
#include "Person/Person.h"
#include "Managments/StudentManagment.c"
#include "Lists/StudentsList.c"
#include "Atualizations/StudentAtualization.c"
#include "Exclude/StudentsExclude.c"
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
            Students_Lists(Student_List,QtdStudent);
            break;
          }
          case 3:{
            Student_Atualization(Student_List,QtdStudent);
            break;
          }
          case 4:{
          if(QtdStudent == 0)
              printf("\nA lista esta vazia\n");
            else{
              Students_Exclude(Student_List,QtdStudent);
              QtdStudent--;
              printf("\nExclusao concluida\n");
            }
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