#include <stdio.h>
#include <string.h>

int main(){
    char *st = "This";
    char st2[45];
    // char st2[45] = "Manas";
    
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);
    
    return 0;
}