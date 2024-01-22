#include <stdio.h> 
#include<time.h>

int digtial_clock(){

//get current local time

time_t current_time = time(NULL);

//convert to string
char current_time_string[20];

strftime(current_time_string,sizeof(current_time_string),"%H:%M:%S", localtime(&current_time));
//PRINTF(current_time_string); printf("%s\n",current_time_string);
}
int main (void){ while(1){
digtial_clock();// time is accroding to london std time line/zone sleep(1);
system("cls");

}

return 0; }
