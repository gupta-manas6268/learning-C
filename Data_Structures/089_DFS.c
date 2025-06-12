#include <stdio.h>
#include <stdlib.h>

int visited[7] = {0,0,0,0,0,0,0};
int A[7][7] = {      // It is graph of Last Lecture.
    {0,1,1,1,0,0,0}, // It is matrix from of the graph.
    {1,0,1,0,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0}
};
void DFS(int i){
    printf("%d ", i);
    visited[i] = 1;

    for(int j = 0; j < 7; j++){
        if((A[i][j] == 1) && (!visited[j])){
            DFS(j);
        }
    }
}

int main(){
    // DFS Implementation.
    DFS(0);
    // DFS(1);  // Also, run code when you uncomment this line.
    

    return 0;
}