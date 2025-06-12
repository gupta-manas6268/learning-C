#include <stdio.h>

#pragma pack(1)
// Here, #pragma pack(1) lets each structure element to 
// begin on a 1-byte boundary as justified by the output of the 
// program given below.

struct emp{
    int a;
    char ch;
    float s;
};

#pragma pack()

int main(){
    struct emp e;
    printf("%u %u %u\n", &e.a, &e.ch, &e.s);
    // Carefully compare the OUTPUT of the two programs which
    // are '09_09_04_01_structure_features.c' and 
    // '09_09_04_02_structure_features.c'

    return 0;
}