#include <stdio.h>
#include <postgresql/libpq-fe.h>

void menu();
int new_acc();
void view_list();
int edit();
int transact();
int erase();




void menu(){
    char choice;
    printf ("\033c");
    printf("\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\n\n");
    printf("\t\t************************\n");
    printf("\t\tWELCOME TO THE MAIN MENU\n");
    printf("1.Create new account\n");
    printf("2.Update information of existing account\n");
    printf("3.For transactions\n");
    printf("4.Check the detail of existing account\n");
    printf("5.Removing existing account\n");
    printf("6.View customer's list\n");
    printf("7.Exit\n");
    printf("\n   Enter your choice:");
    scanf("%c", &choice);
    switch (choice)
    {
    case '1':
        printf("1.Create new account\n");
        break;
    case '2':
        printf("2.Update information of existing account\n");
        break;
    case '3':
        printf("3.For transactions\n");
        break;
    case '4':
        printf("4.Check the detail of existing account\n");
        break;
    case '5':
        printf("5.Removing existing account\n");
        break;
    case '6':
        printf("6.View customer's list\n");
        break;
    case '7':
        printf("7.Exit\n");
        break;
    default:
        menu();
        break;
    }
}

int main() {
    PGconn *conn = PQconnectdb("host=172.17.0.2 port=5432 user=postgres dbname=testdb connect_timeout=5");

    menu();
    printf("\n");
    return 0;
}
