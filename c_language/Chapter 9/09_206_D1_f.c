t
#include <stdio.h>

typedef struct Library{
    int Accession;
    char title[50];
    char author[50];
    int price;
    int flag;
}Library;

int main(){
    Library Lib[100];
    int count = 0;

    for(int i=0; i<100; i++){
        printf("Enter Accession No. of book %d: ", i+1);
        scanf("%s", Lib[i].Accession);

        printf("Enter Title of book %d: ", i+1);
        scanf("%s", Lib[i].title);

        printf("Enter Author of book %d: ", i+1);
        scanf("%s", Lib[i].author);

        printf("Enter Price of book %d: ", i+1);
        scanf("%d", Lib[i].price);

        printf("Enter (0 -> not issued) & (1 -> issued)  of book %d: ", i+1);
        scanf("%d", Lib[i].flag);

        printf("Enter 100 for Exit");
        int Exit; scanf("%d", &Exit);

        count++;
        if(Exit == 100){ break;}
    }

    return 0;
}