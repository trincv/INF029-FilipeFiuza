#include <stdio.h>

void CPF_Validation(Person Student_List[], int QtdStudent){

    int is_valid = 1;

    while(is_valid == 1){
        int tam;
        scanf("%s", Student_List[QtdStudent].cpf);    
        
        tam = strlen(Student_List[QtdStudent].cpf);

        int form = 0;

        if(tam == 14){ // verificação do tamanho da string
    
            for(int icont = 0; icont < 14; icont++){ // verificação do formato do cpf
                if(icont == 11){
                    if(Student_List[QtdStudent].cpf[icont] == '-')
                        form++;
                } else
                    if(icont == 3 || icont == 7){
                        if(Student_List[QtdStudent].cpf[icont] == '.')
                            form++;
                    } else
                        if(Student_List[QtdStudent].cpf[icont] >= '0' && Student_List[QtdStudent].cpf[icont] <= '9')
                            form++;
            }
        }
        if(form == 14)
            is_valid = 0;
        else
            printf("Cpf invalido! Digite novamente: ");
    }
}