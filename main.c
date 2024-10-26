#include <stdio.h>
#include "Views/StudentView.c"
#include "Views/TeacherView.c"
#include "Views/GeralView.c"
#include "Views/DisciplineView.c"
#include "Person/Person.h"
#include "Person/Discipline.h"
#include "Managments/StudentManagment.c"
#include "Managments/TeacherManagment.c"
#include "Managments/DisciplineManagment.c"
#include "Lists/StudentsList.c"
#include "Lists/TeachersLists.c"
#include "Atualizations/StudentAtualization.c"
#include "Atualizations/TeacherAtualization.c"
#include "Exclude/StudentsExclude.c"
#include "Exclude/TeachersExclude.c"
#define TAM_STUDENT 3
#define TAM_TEACHER 3
#define TAM_DISCIPLINE 3

int main(){  
  int QtdStudent = 0, QtdTeacher = 0, QtdDiscipline = 0;;
  Person Student_List[TAM_STUDENT];
  Person Teacher_List[TAM_TEACHER];
  Discipline discipline_List[TAM_DISCIPLINE];
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
          case 0:                        //retorno
            printf("Retornando...\n");
            break;
          case 1:{                        //cadastro aluno
            if(QtdStudent == TAM_STUDENT)
              printf("\nA lista esta cheia\n");
            else{
              Student_Managment(Student_List,QtdStudent);
              QtdStudent++;
              printf("\nCadastro concluído\n");
            }
          break;
          }
          case 2:{                         //listagem aluno
            Students_Lists(Student_List,QtdStudent);
            break;
          }
          case 3:{                           //atualização aluno
            Student_Atualization(Student_List,QtdStudent);
            break;
          }
          case 4:{                           //exclusão aluno
          if(QtdStudent == 0)
              printf("\nA lista esta vazia\n");
            else{
              Students_Exclude(Student_List,QtdStudent);
              QtdStudent--;
              printf("\nExclusao concluida\n");
            }
            break;
          }
          break;
          default:                           //opção inválida
            printf("Opcao invalida!\n\n");
            break;  
        }
      }
      break;
    }
    case 2:{                                //Gerenciamento de professores
      int TeacherOption = -1;
      while(TeacherOption != 0){
        Teacher_View();
        scanf("%d", &TeacherOption);
        switch(TeacherOption){
          case 0:                            //retorno
            printf("Retornando...\n");
            break;
          case 1:{                          //cadastro professor
            if(QtdTeacher == TAM_TEACHER)
              printf("\nA lista esta cheia\n");
            else{
              Teacher_Managment(Teacher_List,QtdTeacher);
              QtdTeacher++;
              printf("\nCadastro concluido\n");
            }
          break;
          }
          case 2:{                           //listagem professor
            Teachers_Lists(Teacher_List,QtdTeacher);
            break;
          }
          case 3:{                           //atualização professor
            Teacher_Atualization(Teacher_List,QtdTeacher);
            break;
          }
          case 4:{                           //exclusão professor
          if(QtdTeacher == 0)
              printf("\nA lista esta vazia\n");
            else{
              Teachers_Exclude(Teacher_List,QtdTeacher);
              QtdTeacher--;
              printf("\nExclusao concluida\n");
           }
           break;
          }
          default:                         //opção inválida
            printf("Opçao invalida!\n\n");
            break;  
        }
      }
    break;
    }
    case 3:{                                 //Gerenciamento de disciplinas
      int DisciplineOption = -1;
      while(DisciplineOption != 0){
        Discipline_View();
        scanf("%d", &DisciplineOption);
        switch(DisciplineOption){
          case 0:                        //retorno
            printf("Retornando...\n");
            break;
          case 1:{                        //cadastro disciplina
            Discipline_Managment(Teacher_List,QtdTeacher,discipline_List,QtdDiscipline);
            QtdDiscipline++;
            printf("\nCadastro concluido\n");
          break;
          }
          case 2:{
            printf("%s ", discipline_List[0].name);
            for(int icont = 0; icont < QtdTeacher; icont++)
              if(discipline_List[0].Register_Teacher == Teacher_List[icont].identification)
                printf("// %s", Teacher_List[icont].name);
          }
          break;
          // case 2:{                         //listagem disciplina
          //   Discipline_Lists(discipline_List,QtdDiscipline);
          //   break;
          // }
          // case 3:{                           //atualização aluno
          //   Student_Atualization(Student_List,QtdStudent);
          //   break;
          // }
          // case 4:{                           //exclusão aluno
          //   if(QtdStudent == 0)
          //     printf("\nA lista esta vazia\n");
          //   else{
          //     Students_Exclude(Student_List,QtdStudent);
          //     QtdStudent--;
          //     printf("\nExclusao concluida\n");
          //   }
          //   break;
          // }
          // break;
          default:                           //opção inválida
            printf("Opcao invalida!\n\n");
            break;  
        }
      }
      break;
    }      
    default:                                 //opção inválida
      printf("Opcao invalida!\n\n");
    }
  }
}