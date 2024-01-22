#include <stdio.h>
#include <string.h>

struct password
{
    char name[50];
    char username[50];
    char password[50];
};

int main(){

    int n;

    printf("How many passwords do you want to store in this password manager: ");
    scanf("%d", &n);

    printf("\n");

    struct password website[n];

    for(int i=0; i<n; i++){    
        printf("Enter the website name : ");
        scanf("%s", website[i].name);

        printf("Enter the username of %s: ", website[i].name);
        scanf("%s", website[i].username);

        printf("Enter the password of %s: ", website[i].name);
        scanf("%s", website[i].password);

        printf("\n");
    }

    for(int i=0; i<n; i++){    

        printf("%s\n", website[i].name);
        printf("%s\n", website[i].username);
        printf("%s\n", website[i].password);
        
    }

    return 0;
}