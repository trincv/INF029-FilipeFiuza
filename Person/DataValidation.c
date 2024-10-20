#include <stdio.h>
#include <string.h>


void Date_Validation(Person Student_List[], int QtdStudent){

int is_valid = 1;

while(is_valid == 1){
      int tam;
      char data[256];
      scanf("%s", data);
    
      tam = strlen(data);
    
    if(tam == 10){ // verificação do tamanho da string
        int form = 0;
        for(int icont = 0; icont < 10; icont++){ // verificação do formato da data
            if(icont == 2 || icont == 5){
                if(data[icont] == '/')
                    form++;
            } else
                if(data[icont] >= '0' && data[icont] <= '9')
                    form++;
        }
        if(form == 10){ // verificação da veracidade da data
         
            Student_List[QtdStudent].Birth.day = (data[0] - '0') * 10 + data[1] - '0'; 
            Student_List[QtdStudent].Birth.month = (data[3] - '0') * 10 + data[4] - '0';
            Student_List[QtdStudent].Birth.year = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + data[9] - '0';
            is_valid = 0;
          }
        else
            printf("\nData invalida! Digite novamente: \n");
    }
    else 
        printf("\nData invalida! Digite novamente: \n");
    }
}