#include <stdio.h>


void Students_Exclude(Person *Student_List, int QtdStudent){
    int matricula, icont, achou = 1; 
    printf("\nInsira a matricula do aluno que deseja excluir: ");
    while(achou == 1){
        scanf("%d", &matricula);
        for(icont = 0; Student_List[icont].identification != matricula && icont < QtdStudent; icont++){
        }
        if(Student_List[icont].identification == matricula){
            achou = 0;
        }
        if(achou == 1)
            printf("\nMatricula inexiste! Digite novamente: ");
    }
    for(icont; icont < QtdStudent; icont++){
        Student_List[icont].identification = Student_List[icont + 1].identification;
        for(int jcont = 0; jcont < 60; jcont++){
            Student_List[icont].name[jcont] = Student_List[icont + 1].name[jcont];
        }
        for(int jcont = 0; jcont < 20; jcont++){
            Student_List[icont].cpf[jcont] = Student_List[icont + 1].cpf[jcont];
        }
        Student_List[icont].genre = Student_List[icont + 1].genre;
        Student_List[icont].Birth.day = Student_List[icont + 1].Birth.day;
        Student_List[icont].Birth.month = Student_List[icont + 1].Birth.month;
        Student_List[icont].Birth.year = Student_List[icont + 1].Birth.year;
    }

    printf("Exclusao concluida\n");

}