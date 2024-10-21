#include <stdio.h>


void Students_Lists(Person Student_List[], int QtdStudent){
    if(QtdStudent == 0)
        printf("\nNenhum aluno cadastrado!\n");
    else{
        printf("\n");
        for(int icont = 0; icont < QtdStudent; icont++){
            printf("%d - %d", icont + 1, Student_List[icont].identification);
            printf(" // %s", Student_List[icont].name);
            printf(" // %02d/", Student_List[icont].Birth.day);
            printf("%02d/", Student_List[icont].Birth.month);
            printf("%d", Student_List[icont].Birth.year);
            printf(" // %s", Student_List[icont].cpf);
            printf(" // %c \n", Student_List[icont].genre);
        }
    }
}