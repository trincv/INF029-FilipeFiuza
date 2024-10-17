#include <stdio.h>
#include "Views/StudentView.h"

#define CAD_SUCESS -1
#define CAD_FAIL -2

int main() {

  int GeralOption = -1;

  while(GeralOption != 0){
    printf("INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA(IFBA)\n\n");
    printf("0 - Fechar o progrma\n");
    printf("1 - Gerenciar alunos\n");
    printf("2 - Gerenciar professores\n");
    printf("3 - Gerenciar disciplinas\n");
    printf("4 - ''''''''''''''''''\n");
    printf("Escolha uma atividade: \n");
    scanf("%d", &GeralOption);

    switch (GeralOption) {
    case 0:
      printf("Fechando o programa...\n");
      break;
    case 1:
      Student_View();
    default:
      printf("Opção inválida!\n");
    }
  }
}