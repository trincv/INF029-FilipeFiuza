#include <stdio.h>

void CPF_Validation_Teacher(Person Teacher_List[], int QtdTeacher){

    int is_valid = 1;

    while(is_valid == 1){
        int tam;
        scanf("%s", Teacher_List[QtdTeacher].cpf);    
        
        tam = strlen(Teacher_List[QtdTeacher].cpf);

        int form = 0;

        if(tam == 14){ // verificação do tamanho da string
    
            for(int icont = 0; icont < 14; icont++){ // verificação do formato do cpf
                if(icont == 11){
                    if(Teacher_List[QtdTeacher].cpf[icont] == '-')
                        form++;
                } else
                    if(icont == 3 || icont == 7){
                        if(Teacher_List[QtdTeacher].cpf[icont] == '.')
                            form++;
                    } else
                        if(Teacher_List[QtdTeacher].cpf[icont] >= '0' && Teacher_List[QtdTeacher].cpf[icont] <= '9')
                            form++;
            }
        }
        if(form == 14)
            is_valid = 0;
        else
            printf("Cpf invalido! Digite novamente: ");
    }
}