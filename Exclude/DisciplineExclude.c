#include <stdio.h>
#include <string.h>

void Discipline_Exclude(Discipline discipline_List[], int QtdDiscipline){
    int matricula, icont, achou = 1;
    char code[15]; 
    printf("\nInsira o codigo da disciplina que deseja excluir: ");
    while(achou == 1){
        scanf(" %49[^\n]", code);
        for(icont = 0; strcmp(discipline_List[icont].code,code) != 0 && icont < QtdDiscipline; icont++){
        }
        if(strcmp(discipline_List[icont].code,code) == 0){
            achou = 0;
        }
        if(achou == 1)
            printf("\nCodigo inexiste! Digite novamente: ");
    }
    for(icont; icont < QtdDiscipline; icont++){
        for(int jcont = 0; jcont < 25; jcont++){
            discipline_List[icont].name[jcont] = discipline_List[icont + 1].name[jcont];
        }
        for(int jcont = 0; jcont < 15; jcont++){
            discipline_List[icont].code[jcont] = discipline_List[icont + 1].code[jcont];
        }
        for(int jcont = 0; jcont < 30; jcont++){
            discipline_List[icont].Register_Student[jcont] = discipline_List[icont + 1].Register_Student[jcont];
        }
        discipline_List[icont].semester = discipline_List[icont + 1].semester;
        discipline_List[icont].Register_Teacher = discipline_List[icont + 1].Register_Teacher;
    }

    printf("Exclusao concluida\n");

}