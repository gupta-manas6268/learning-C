#include <stdio.h>
#include <string.h>

typedef struct Data{
    int rollNo;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
}data;

void printName(data Student[], int size){
    for(int i=0; i<size; i++){
        printf("Name: %s\n", Student[i].name);
    }
}

void printRoll(data Student[], int size, int roll){
    for(int i=0; i<size; i++){
        if(roll = Student[i].rollNo){
            printf("Name: %s\n", Student[i].name);
            printf("Department: %s\n", Student[i].department);
            printf("Course: %s\n", Student[i].course);
            printf("Year of Joining: %d\n", Student[i].yearOfJoining);

            break;
        }
    }
}

int main(){
    data Student[450];

    for(int i=0; i<2; i++){
        scanf("%d", &Student[i].rollNo);
        scanf("%s", &Student[i].name);
        scanf("%s", &Student[i].department);
        scanf("%s", &Student[i].course);
        scanf("%d", &Student[i].yearOfJoining);
    }

    printName(Student, 2);

    int Roll;
    printf("Enter a Roll No. whose details you want: ");
    scanf("%d", &Roll);

    printRoll(Student, 2, Roll);

    return 0;
}