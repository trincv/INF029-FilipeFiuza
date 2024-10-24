#include <stdio.h>
//#include "../Person/DataValidation.c"

void Student_Atualization(Person Student_List[], int QtdStudent){
    
    int matricula, icont, achou = 1; 
    printf("\nInsira a matricula do aluno: ");
    while(achou == 1){
        scanf("%d", &matricula);
        for(icont = 0; Student_List[icont].identification != matricula && icont < QtdStudent; icont++){
        }
        if(Student_List[icont].identification == matricula){
            achou = 0;
            QtdStudent = icont;
        }
        if(achou == 1)
            printf("\nMatricula inexiste! Digite novamente: ");
    }
    int AtualizationOption = -1;
    while(AtualizationOption < 0 || AtualizationOption > 2){
        printf("\nQual dado deseja atualizar?\n");
        printf("0 - Nome\n");
        printf("1 - Data de nascimento\n");
        printf("2 - Genero\n");
        scanf("%d", &AtualizationOption);
        switch(AtualizationOption){
            case 0:{
                printf("\nInsira o novo nome: ");
                scanf(" %49[^\n]", Student_List[QtdStudent].name);
                AtualizationOption = 0;
            }
            break;
            // case 1:{
            //     printf("\nInsira a nova data de nacimento DD/MM/YYYY: ");
            //     Date_Validation(Student_List,QtdStudent);
            //     AtualizationOption = 0;
            // }
            break;
            case 2:{
                printf("\nInsira o novo genero: ");
                int is_valid = 1;

                while(is_valid == 1){
                    scanf(" %c", &Student_List[QtdStudent].genre);
                    if(Student_List[QtdStudent].genre != 'M' && Student_List[QtdStudent].genre != 'F')
                        printf("Genero invalido! Digite novamente: ");
                    else
                        is_valid = 0;
                }
                AtualizationOption = 0;
            }
            break;
        }
        if(AtualizationOption < 0 || AtualizationOption > 2)
            printf("\nOpcao invalida!");
    }
    printf("\nAtualizacao completa!\n");

}