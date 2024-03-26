// Q.6: If the string "Alice in wonder land" is fed to the following scanf( )
//       statement, what will be the contents of the arrays str1, str2, str3
//       and str4?
//       scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ;



















#include <stdio.h>
#include <string.h>

int main(){
    // char *st1, *st2, *st3, *st4; // This line didn't work when I input strings, & it didn't OUTPUT strings.
                                    // Because using these pointers without allocating memory leads to undefined behavior.

    char st1[50], st2[50], st3[50], st4[50]; // This line gives correct OUTPUT.

    scanf("%s %s %s %s", st1, st2, st3, st4); // INPUT: 'Alice in wonder land' in first line. 
    
    printf("%s%s%s%s\n", st1, st2, st3, st4);
    printf("%s %s %s %s\n", st1, st2, st3, st4);

    return 0;
}