#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    if(you == comp){
        return 0;    
    }
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }

    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }

    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
    
}
int main(){
    char you, comp;
    int num;
    srand(time(0));
    num = rand()%3 + 1;

    if(num == 1){
        comp = 'w';
    }
    else if(num == 2){
        comp = 'g';
    }
    else{
        comp = 's';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);

    if(result == 0){
        printf("Game draw\n");
    }
    else if(result == 1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    printf("You chose '%c' and computer chose '%c'.\n", you, comp);

    return 0; 
}