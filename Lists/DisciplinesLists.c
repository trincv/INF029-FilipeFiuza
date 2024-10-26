#include <stdio.h>

void Discipline_Lists(Discipline discipline_List[], int QtdDiscipline, Person Student_List[], int QtdStudent, Person Teacher_List[], int QtdTeacher){

    int DisciplineLists_Option = -1;
    while(DisciplineLists_Option < 0 || DisciplineLists_Option > 2){
        printf("\nSelecione o tipo de listagem desejada:\n");
        printf("0 - Retornar\n");
        printf("1 - Listar todas as disciplinas\n");
        printf("2 - Listar dados de uma disciplina\n");
        scanf("%d", &DisciplineLists_Option);
    
        switch(DisciplineLists_Option){
            case 0: 
                printf("Retornando...\n");
                break;
            case 1:{
                printf("\n");
                for(int icont = 0; icont < QtdDiscipline; icont++){
                    printf("%d - %s ", icont + 1, discipline_List[icont].name);
                    printf("// %s ", discipline_List[icont].code);
                    printf("// %d ", discipline_List[icont].semester);
                    for(int jcont = 0; jcont < QtdTeacher; jcont++)
                        if(discipline_List[icont].Register_Teacher == Teacher_List[jcont].identification)
                            printf("// %s\n", Teacher_List[jcont].name);
                }
                break;
            }
            default:
                printf("opcao invalida!\n\n");
                break;
        }
    }


}