t

// This code is not giving OUTPUT when I fill INPUT



#include <stdio.h>
#include <stdbool.h>

int main(){
    char Sud[9][18];

    for(int i=0; i<9; i++){
        scanf("%s", &Sud[i]);
    }

    int sud[9][9];

    for(int i=0; i<9; i++){
        for(int j=0; j<18; j+=2){
            int n = sud[i][j] - '0';

            sud[i][j/2] = n;
        }
    }


    bool Sudoku = true;


    // To Check whether numbers in a Row are correct or not.
    for(int i=0; i<9; i++){
        int occurence[10] = {0};  // Initialize occurence array 

        for(int j=0; j<9; j++){
            int n = sud[i][j];

            occurence[n]++;
        }

        for(int k=1; k<=9; k++){
            if(occurence[k] == 1){}

            else{
                Sudoku = false;

                break;
            }
        }

        if(Sudoku == false){ break;}
    }


    // To Check whether numbers in a Column are correct or not.
    for(int i=0; i<9; i++){
        if(Sudoku == false){ break;}

        int occurence[10] = {0};  // Initialize occurence array

        for(int j=0; j<9; j++){
            int n = sud[j][i];

            occurence[n]++;
        }

        for(int k=1; k<=9; k++){
            if(occurence[k] == 1){}

            else{
                Sudoku = false;

                break;
            }
        }

    }

    int occurence[9];

    // To Check whether numbers in a 9x9 boxes are correct or not.
    for(int i=0; i<9; i+=3){
        if(Sudoku == false){ break;}

        for(int j=0; j<9; j+=3){
            if(Sudoku == false){ break;}

            int occurence[10] = {0};  // Initialize occurence array

            for(int a=0; a<3; a++){
                for(int b=0; b<3; b++){
                    int n = sud[i+a][j+b];

                    occurence[n]++;
                }
            }

            for(int k=1; k<=9; k++){
                if(occurence[k] != 1){
                    Sudoku = false;

                    break;
                }
            }
        }
    }

    if(Sudoku == true){ printf("Your Sudoku is Correct.");}
    else{ printf("Your Sudoku is Wrong.");}


    return 0;
}