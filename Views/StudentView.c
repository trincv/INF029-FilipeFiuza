#include <stdio.h>

void Student_View(){
  int StudentOption = -1;

  while(StudentOption != 0){
    printf("Gerenciamento de alunos:\n\n");
    printf("0 - Voltar\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("3 - Atualizar aluno\n");
    printf("4 - Excluir aluno\n");
    printf("Escolha uma atividade: \n");
    scanf("%d", &StudentOption);

    switch(StudentOption){
      case 0:
        printf("Retornando...\n");
        break;
      case 1:
        
      default:
        printf("Opção inválida!\n");
    }
  }
}