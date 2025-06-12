#include <stdio.h>
int min_func(int a, int b){
    return a < b ? a:b ;
}
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);

    int marks[n];
    for(int i=0; i<n; i++){
        printf("Enter the value of marks for student %d: \n", i+1);
        scanf("%d", &marks[i]);
    }
    int sum = 0 , mini = 1000;
    for(int i = 0; i<n; i++){
        sum += marks[i];
        mini = min_func(mini, marks[i]);
        printf("The value of marks for student %d is %d: \n",i+1, marks[i]);
        
    }
    printf("sum = %d\n", sum);
    printf("mini = %d\n", mini);

    return 0;
}