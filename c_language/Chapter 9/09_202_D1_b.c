#include <stdio.h>
#include <string.h>

typedef struct bankAccount{
    int AccountNo;
    char name[50];
    int Balance;
}bank;

void function(bank Account[], int size, int num){
    for(int i=0; i<size; i++){
        if(Account[i].Balance < num){
            printf("Account No: %d & Name: %s\n", Account[i].AccountNo, Account[i].name);
        }
    }
}

void withdrawal(bank Account[], int size){
    int num, amount, code;

    printf("Account no.: ");
    scanf("%d", &num);

    printf("Amount:");
    scanf("%d", &amount);

    printf("Code for (deposit -> 1 & withdrawal -> 0):");
    scanf("%d", &code);

    for(int i=0; i<size; i++){
        
    }

    if((code == 0) && (Account[]))

}

int main(){
    bank Account[200];

    for(int i=0; i<2; i++){
        printf("Account No.: ");
        scanf("%d", &Account[i].AccountNo);

        printf("Name: ");
        scanf("%s", &Account[i].name);

        printf("Balance in Account: ");
        scanf("%d", &Account[i].Balance);
    }

    function(Account, 2, 100);

    return 0;
}