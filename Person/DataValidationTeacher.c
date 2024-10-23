#include <stdio.h>
#include <string.h>


void Date_Validation_Teacher(Person Teacher_List[], int QtdTeacher){

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
         
            Teacher_List[QtdTeacher].Birth.day = (data[0] - '0') * 10 + data[1] - '0'; 
            Teacher_List[QtdTeacher].Birth.month = (data[3] - '0') * 10 + data[4] - '0';
            Teacher_List[QtdTeacher].Birth.year = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + data[9] - '0';
            
            int is_leap_year;
            
            if(Teacher_List[QtdTeacher].Birth.year % 4 == 0 && Teacher_List[QtdTeacher].Birth.year % 100 > 0)
                is_leap_year = 0;
            else
                if(Teacher_List[QtdTeacher].Birth.year % 4 == 0 && Teacher_List[QtdTeacher].Birth.year % 100 == 0 && Teacher_List[QtdTeacher].Birth.year % 400 == 0)
                    is_leap_year = 0;
                else
                    is_leap_year = 1;
            
            if(Teacher_List[QtdTeacher].Birth.year < 2022 && Teacher_List[QtdTeacher].Birth.year > 1924){
                
                if(Teacher_List[QtdTeacher].Birth.month > 0 && Teacher_List[QtdTeacher].Birth.month <= 12){
                    switch(Teacher_List[QtdTeacher].Birth.month){
                        case 2:{
                            if(is_leap_year == 0){
                                if(Teacher_List[QtdTeacher].Birth.day > 29 ||  Teacher_List[QtdTeacher].Birth.day < 1)
                                    printf("\nData invalida! Digite novamente: ");
                                else
                                    is_valid = 0;
                            } else
                                if( Teacher_List[QtdTeacher].Birth.day > 28 ||  Teacher_List[QtdTeacher].Birth.day < 1)
                                    printf("\nData invalida! Digite novamente: ");
                                else
                                    is_valid = 0;
                            break;
                        }
                        case 4:
                        case 6:
                        case 9:
                        case 11:
                            if(Teacher_List[QtdTeacher].Birth.day > 30 ||  Teacher_List[QtdTeacher].Birth.day < 1)
                                printf("\nData invalida! Digite novamente: ");
                            else
                                is_valid = 0;
                            break;
                        default:
                            if( Teacher_List[QtdTeacher].Birth.day > 31 ||  Teacher_List[QtdTeacher].Birth.day < 1)
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