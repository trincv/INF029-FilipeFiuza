#include <stdio.h>
#include "Views/StudentView.c"
#include "Views/TeacherView.c"
#include "Views/GeralView.c"
#include "Person/Person.h"
#include "Managments/StudentManagment.c"
#include "Lists/StudentsList.c"
#include "Atualizations/StudentAtualization.c"
#include "Exclude/StudentsExclude.c"
#define TAM_STUDENT 3
#define TAM_TEACHER 3

int main(){  
  int QtdStudent = 0, QtdTeacher = 0;
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
    case 1:{                          //Gerenciamento de alunos
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
    case 2:{                                //Gerenciamento de professores
      int TeacherOption = -1;
      while(TeacherOption != 0){
        Teacher_View();
        scanf("%d", &TeacherOption);
        switch(TeacherOption){
          case 0:
            printf("Retornando...\n");
            break;
          // case 1:{
          //   if(QtdTeacher == TAM_TEACHER)
          //     printf("\nA lista esta cheia\n");
          //   else{
          //     Student_Managment(Teacher_List,QtdTeacher);
          //     QtdTeacher++;
          //     printf("\nCadastro concluido\n");
          //   }
          // break;
          // }
          // case 2:{
          //   Students_Lists(Teacher_List,QtdTeacher);
          //   break;
          // }
          // case 3:{
          //   Student_Atualization(Teacher_List,QtdTeacher);
          //   break;
          // }
          // case 4:{
          // if(QtdTeacher == 0)
          //     printf("\nA lista esta vazia\n");
          //   else{
          //     Students_Exclude(Teacher_List,QtdTeacher);
          //     QtdTeacher--;
          //     printf("\nExclusao concluida\n");
          //  }
          //}
          default:
            printf("Opção invalida!\n\n");
            break;  
        }
      }
    break;
    }                                      
      
    default:
      printf("Opção invalida!\n\n");
    }
  }
}