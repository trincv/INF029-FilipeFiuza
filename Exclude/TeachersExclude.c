#include <stdio.h>


void Teachers_Exclude(Person *Teacher_List, int QtdTeacher){
    int matricula, icont, achou = 1; 
    printf("\nInsira a matricula do professor que deseja excluir: ");
    while(achou == 1){
        scanf("%d", &matricula);
        for(icont = 0; Teacher_List[icont].identification != matricula && icont < QtdTeacher; icont++){
        }
        if(Teacher_List[icont].identification == matricula){
            achou = 0;
        }
        if(achou == 1)
            printf("\nMatricula inexiste! Digite novamente: ");
    }
    for(icont; icont < QtdTeacher; icont++){
        Teacher_List[icont].identification = Teacher_List[icont + 1].identification;
        for(int jcont = 0; jcont < 60; jcont++){
            Teacher_List[icont].name[jcont] = Teacher_List[icont + 1].name[jcont];
        }
        for(int jcont = 0; jcont < 20; jcont++){
            Teacher_List[icont].cpf[jcont] = Teacher_List[icont + 1].cpf[jcont];
        }
        Teacher_List[icont].genre = Teacher_List[icont + 1].genre;
        Teacher_List[icont].Birth.day = Teacher_List[icont + 1].Birth.day;
        Teacher_List[icont].Birth.month = Teacher_List[icont + 1].Birth.month;
        Teacher_List[icont].Birth.year = Teacher_List[icont + 1].Birth.year;
    }

    printf("Exclusao concluida\n");

}