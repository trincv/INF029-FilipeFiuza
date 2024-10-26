#include <stdio.h>

void Discipline_Managment(Person Teacher_List[], int QtdTeacher, Discipline discipline_List[], int QtdDiscipline){

    printf("Insira o nome da disciplina: ");
    scanf(" %49[^\n]", discipline_List[QtdDiscipline].name);

    printf("Insira o codigo da disciplina: ");
    scanf(" %49[^\n]", discipline_List[QtdDiscipline].code);

    printf("Insira o semestre da disciplina: ");
    scanf("%d", &discipline_List[QtdDiscipline].semester);

    printf("Insira a matricula do professor responsavel: ");
    int is_valid = 1;
    while(is_valid == 1){
        scanf("%d", &discipline_List[QtdDiscipline].Register_Teacher);
        for(int icont = 0; icont < QtdTeacher; icont++)
            if(discipline_List[QtdDiscipline].Register_Teacher == Teacher_List[icont].identification)
                is_valid = 0;
        if(is_valid == 1)
            printf("Matricula de professor invalida! Digite novamente: ");
    }
}