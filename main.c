#include <stdio.h>
#include "Views\StudentView.c"
#include "Views\GeralView.c"

#define CAD_SUCESS -1
#define CAD_FAIL -2

int main(){  

  int GeralOption = -1;

  while(GeralOption != 0){
    
    Geral_View();

    scanf("%d", &GeralOption);

    switch (GeralOption) {
    case 0:
      printf("Fechando o programa...\n");
      break;
    case 1:
      Student_View();
    default:
      printf("Opção inválida!\n\n");
    }
  }
}