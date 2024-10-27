#include <stdio.h>
#include <string.h>

void Discipline_Atualization(Discipline discipline_List[], int QtdDiscipline, Person Student_List[], int QtdStudent, Person Teacher_List[], int QtdTeacher){

    int DisciplineAtualization_Option = -1;
    char code[10];
    int position, is_valid = 1;

    printf("\nInforme o codigo da disciplina que deseje atualizar: ");
    while(is_valid == 1){
        scanf(" %49[^\n]", code);
        for(int icont = 0; icont < QtdDiscipline; icont++)
            if(strcmp(code,discipline_List[icont].code) == 0){
                is_valid = 0;
                position = icont;
                break;
            }
        if(is_valid == 1)
            printf("\nCodigo invalido! Digite novamente: ");
     }

    while(DisciplineAtualization_Option < 0 || DisciplineAtualization_Option > 5){
        printf("\nQual dado deseja atualizar?\n");
        printf("0 - Nome\n");
        printf("1 - Codigo\n");
        printf("2 - Semestre\n");
        printf("3 - Professor responsavel\n");
        printf("4 - Cadastro de aluno\n");
        printf("5 - Exclusao de aluno\n");
        scanf("%d", &DisciplineAtualization_Option);
        switch(DisciplineAtualization_Option){
            case 0:{
                printf("\nInforme o novo nome da disciplina: ");
                scanf(" %49[^\n]", discipline_List[position].name);
                break;
            }
            case 1:{
                printf("\nInforme o novo codigo da disciplina: ");
                scanf(" %49[^\n]", discipline_List[position].code);
                break;
            }
            case 2:{
                printf("\nInforme o novo semestre que a disciplina pertence: ");
                scanf("%d", &discipline_List[position].semester);
                break;
            }
            case 3:{
                printf("Insira a matricula do professor responsavel: ");
                    is_valid = 1;
                    while(is_valid == 1){
                        scanf("%d", &discipline_List[position].Register_Teacher);
                        for(int icont = 0; icont < QtdTeacher; icont++)
                            if(discipline_List[position].Register_Teacher == Teacher_List[icont].identification)
                                is_valid = 0;
                        if(is_valid == 1)
                            printf("Matricula de professor invalida! Digite novamente: ");
                    }
                break;
            }
            case 4:{
                is_valid = 1;
                int student;
                
                for(student = 0; discipline_List[position].Register_Student[student] != -1 && student < 1; student++){}
                if(student == 1)
                    printf("\nMaximo de alunos cadastrados na disciplina!");
                else{
                    printf("\nInsira a mtricula do aluno a ser cadastrado: ");                  
                    while(is_valid == 1){
                        scanf("%d", &discipline_List[position].Register_Student[student]);
                        for(int icont = 0; icont < QtdStudent; icont++)
                            if(discipline_List[position].Register_Student[student] == Student_List[icont].identification)
                                is_valid = 0;
                        if(is_valid == 1)
                            printf("\nMatricula de estudante invalida! Digite novamente: ");
                    }
                }
                break;
            }
            default: 
                printf("\nopcao invalida!\n");
                break;
        }
    }
    printf("\nAtualizacao concluida!\n");
}