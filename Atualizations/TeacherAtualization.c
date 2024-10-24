#include <stdio.h>
//#include "../Person/DataValidation.c"

void Teacher_Atualization(Person Teacher_List[], int QtdTeacher){
    
    int matricula, icont, achou = 1; 
    printf("\nInsira a matricula do professor: ");
    while(achou == 1){
        scanf("%d", &matricula);
        for(icont = 0; Teacher_List[icont].identification != matricula && icont < QtdTeacher; icont++){
        }
        if(Teacher_List[icont].identification == matricula){
            achou = 0;
            QtdTeacher = icont;
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
                scanf(" %49[^\n]", Teacher_List[QtdTeacher].name);
                AtualizationOption = 0;
            }
            break;
            // case 1:{
            //     printf("\nInsira a nova data de nacimento DD/MM/YYYY: ");
            //     Date_Validation(Teacher_List,QtdTeacher);
            //     AtualizationOption = 0;
            // }
            break;
            case 2:{
                printf("\nInsira o novo genero: ");
                int is_valid = 1;

                while(is_valid == 1){
                    scanf(" %c", &Teacher_List[QtdTeacher].genre);
                    if(Teacher_List[QtdTeacher].genre != 'M' && Teacher_List[QtdTeacher].genre != 'F')
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