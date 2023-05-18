#include <stdio.h>

    int main(){
        int maths, physics, chemistry;
        float total;
        printf("Enter number in maths subject\n");
        scanf("%d", &maths);

        printf("Enter number in physics subject\n");
        scanf("%d", &physics);

        printf("Enter number in chemistry subject\n");
        scanf("%d", &chemistry);

        total = (physics +chemistry +maths)/3;

        if((total<40) || physics<33 || chemistry<33 || maths<33){
            printf("Your total percentage is %f and you are fail\n", total);
        }
        else{
            printf("Your total percentage is %f and you are pass\n", total);
        }



    
    return 0;
}