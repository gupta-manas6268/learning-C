t

// I didn't properly check when OUTPUT in terminal.
// So, firstly check the code, whether it is correct or not.



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

    int numbering;

    for(int i=0; i<size; i++){
        if(Account[i].AccountNo == num){
            numbering = num;
            break;
        }
    }

    if((code == 0) && (Account[numbering].Balance - amount < 100)){
        printf("The balance is insufficient for the specified withdrawal");
    }

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

        printf("\n");
    }

    function(Account, 2, 100);

    withdrawal(Account, 2);

    return 0;
}