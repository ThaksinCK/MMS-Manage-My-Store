#include<stdio.h>
#include<conio.h>

char username[10] = "admin";
char password[10] ="password";

int main(){

    while(1){
    login();
    index();
    }

}

int login(){
    char user[10];
    char pass[10];
    printf("Username:");
    scanf("%s",&user);
    printf("Password: ");
    scanf("%s",&pass);
    if(strcmp(user,username)==0 && strcmp(pass,password)==0){
    printf("login...");
    }
    else{
        printf("กระจอกจริง");
        exit(1);
    }
    sleep(1);
    clrscr();
}

void index(){
    printf("My Coffe shop\n\n");
    printf("1. Add new coffe recipe\n");
    printf("2. Coffe list\n");
    printf("3. Wallet\n");
    printf("4. Add new members\n");
    printf("5. Members list\n");
    printf("6. Exit\n");
    action_command();
}

void action_command(){
    int action;
    printf("\n\nChose from 1to6: ");
    scanf("%d",&action);
    switch(action){
        case 1:
            add_new_coffe();
            break;
        case 2:
            coffe_list();
            break;
        case 3:
            wallet();
            break;
        case 4:
            add_new_members();
            break;
        case 5:
            members_list();
            break;
        case 6:
            exit(1);
            break;                                   
    }    
}

void add_new_coffe(){
    printf("add new coffe\n");
}

void coffe_list(){
    printf("coffe list\n");
}

void wallet(){
    printf("wallet\n");
}

void add_new_members(){
    printf("add new members\n");
}

void members_list(){
    printf("members list\n");
}