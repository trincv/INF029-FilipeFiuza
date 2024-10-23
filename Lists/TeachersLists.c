#include <stdio.h>


void Teachers_Lists(Person Teacher_List[], int QtdTeacher){
    if(QtdTeacher == 0)
        printf("\nNenhum aluno cadastrado!\n");
    else{
        printf("\n");
        for(int icont = 0; icont < QtdTeacher; icont++){
            printf("%d - %d", icont + 1, Teacher_List[icont].identification);
            printf(" // %s", Teacher_List[icont].name);
            printf(" // %02d/", Teacher_List[icont].Birth.day);
            printf("%02d/", Teacher_List[icont].Birth.month);
            printf("%d", Teacher_List[icont].Birth.year);
            printf(" // %s", Teacher_List[icont].cpf);
            printf(" // %c \n", Teacher_List[icont].genre);
        }
    }
}