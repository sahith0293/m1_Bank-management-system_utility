#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct customer {
    char number[50];
    char ac[50];
    char password[50];
    float balance;
};

int main(){
    struct customer cus,cus1;
    FILE *fp;
    char filename[50];
    char mobile_number[50];char passw[50];
    int choice,option;
    char cont = 'y';
    float amount;
    printf("\n welcome to our services");
    printf("\n\n1. register an acc");
    printf("\n2. login to acc");

   printf("\n\nselect your choice:\t");
   scanf("%d",&choice);

   if(choice == 1){
       system("clear");
       printf("enter your accno:\t");
       scanf("%s",cus.ac);
       printf("enter your mobile number:\t");
       scanf("%s",cus.number);
       printf("enter new password:\t");
       scanf("%s",cus.password);
       cus.balance = 0;
       strcpy(filename,cus.number);
       fp = fopen(strcat(filename,".dot"),"w");
       fwrite(&cus,sizeof(struct customer),1,fp);
       if(fwrite != 0){
           printf("\n\nAccount succesfully created");
        }
        else{
            printf("something went wrong please try again");
        }
        fclose(fp);
   }

    if(choice == 2){
        system("clear");
        printf("mobile number:\t");
        scanf("%s",mobile_number);
        printf("password:\t");
        scanf("%s",passw);
        strcpy(filename,mobile_number);
        fp =fopen(strcat(filename,".dot"),"r");
        if(fp == NULL){
            printf("\account doesnt exist");
        }
        fread(&cus,sizeof(struct customer),1,fp);
        fclose(fp);
        if(!strcmp(passw,cus.password)){
            while (cont == 'y'){
                system("clear");
                printf("\n press 1 to balance enqiry");
                printf("\n press 2 to deposit an account");
                printf("\n press 3 to withdrawal");
                printf("\n press 4 to transfer the balance");
                printf("\n\n enter your option:\t");
                scanf("%d",&option);

                
                
                
                switch(option){
                    case 1:
                        printf("\nyour balance is Rs.%2f",cus.balance);
                        break;
                    case 2:
                        printf("\nEner the amount you want to deposit:\t");
                        scanf("%f",&amount);
                        cus.balance += amount;
                        fp =fopen(filename,"w");
                        fwrite(&cus,sizeof(struct customer),1,fp);
                        if(fwrite != NULL)
                        printf("\nyour cash is deposited succesfully.");
                        fclose(fp);
                        break;

                    case 3:
                        printf("\nEner the amount you want to withdrawal:\t");
                        scanf("%f",&amount);
                        cus.balance -= amount;
                        fp =fopen(filename,"w");
                        fwrite(&cus,sizeof(struct customer),1,fp);
                        if(fwrite != NULL)
                        printf("\nyour have withdrwan Rs.%.2f", amount);
                        fclose(fp); 
                        break;

                    case 4:
                        printf("\nenter the mobile number to transfer the balance\t");
                        scanf("%s",mobile_number);
                        printf("\nenter the amount to transfer:\t");
                        scanf("%f",&amount);
                        if(amount > cus.balance)
                        printf("\nINSUFFICIENT BALANCE");
                        else{
                            strcpy(filename,mobile_number);
                            fp = fopen(strcat(filename,".dot"),"r");
                            fread(&cus1,sizeof(struct customer),1,fp);
                            fclose(fp);
                            fp = fopen(filename,"w");
                            cus1.balance += amount;
                            fwrite(&cus1,sizeof(struct customer),1,fp);

                            fclose(fp);
                            if(fwrite != NULL){
                                printf("\nYou have successfully transfer Rs.%.2f to %s",amount,mobile_number);
                                strcpy(filename,cus.number);
                                fp  = fopen(strcat(filename,".dot"),"w");
                                cus.balance -= amount;
                                fwrite(&cus,sizeof(struct customer),1,fp);
                                fclose(fp);
                            }
                            
                            
                        }

                }
                printf("\nDo you want to continue the transaction[y/no]\t");
                scanf("%s",&cont);
            }
        }
        else{
            printf("\nInvalid password");
        }
    }

   

    return 0;
}