#include <stdio.h>
#include <string.h>


void Date_Validation_Student(Person Student_List[], int QtdStudent){

int is_valid = 1;

while(is_valid == 1){
      int tam;
      char data[20];
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
            
            int is_leap_year;
            
            if(Student_List[QtdStudent].Birth.year % 4 == 0 && Student_List[QtdStudent].Birth.year % 100 > 0)
                is_leap_year = 0;
            else
                if(Student_List[QtdStudent].Birth.year % 4 == 0 && Student_List[QtdStudent].Birth.year % 100 == 0 && Student_List[QtdStudent].Birth.year % 400 == 0)
                    is_leap_year = 0;
                else
                    is_leap_year = 1;
            
            if(Student_List[QtdStudent].Birth.year < 2022 && Student_List[QtdStudent].Birth.year > 1924){
                
                if(Student_List[QtdStudent].Birth.month > 0 && Student_List[QtdStudent].Birth.month <= 12){
                    switch(Student_List[QtdStudent].Birth.month){
                        case 2:{
                            if(is_leap_year == 0){
                                if(Student_List[QtdStudent].Birth.day > 29 ||  Student_List[QtdStudent].Birth.day < 1)
                                    printf("\nData invalida! Digite novamente: ");
                                else
                                    is_valid = 0;
                            } else
                                if( Student_List[QtdStudent].Birth.day > 28 ||  Student_List[QtdStudent].Birth.day < 1)
                                    printf("\nData invalida! Digite novamente: ");
                                else
                                    is_valid = 0;
                            break;
                        }
                        case 4:
                        case 6:
                        case 9:
                        case 11:
                            if(Student_List[QtdStudent].Birth.day > 30 ||  Student_List[QtdStudent].Birth.day < 1)
                                printf("\nData invalida! Digite novamente: ");
                            else
                                is_valid = 0;
                            break;
                        default:
                            if( Student_List[QtdStudent].Birth.day > 31 ||  Student_List[QtdStudent].Birth.day < 1)
                                printf("\nData invalida! Digite novamente: ");
                            else
                                is_valid = 0;
                            break;
                    }
                } else
                    printf("\nData invalida! Digite novamente: ");
            } else
                printf("\nData invalida! Digite novamente: ");
        }
        else
            printf("\nData invalida! Digite novamente: ");
    }
    else 
        printf("\nData invalida! Digite novamente: ");
}
}