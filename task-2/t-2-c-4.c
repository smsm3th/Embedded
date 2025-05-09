#include <stdio.h>
#include <string.h>
int login(const char*Username,const char*Password){
     const char *username = "asmaa";
     const char *password = "2005";
     if (strcmp(Username,username)==0 && strcmp(Password,password)==0){
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    char username[10];
    char password[10];
    int attmpets=0;
     while(attmpets<3){
    printf("Enter username:");
    scanf("%s",username);

    printf("Enter password:");
    scanf("%s",password);

    if (login(username,password)){
        printf("Login successful!");
        return 0;
    }
    else{
        printf("Login failed!");
        attmpets++;
    }
    }
}
