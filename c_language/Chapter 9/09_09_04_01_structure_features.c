#include <stdio.h>

struct emp{
    int a;
    char ch;
    float s;
};

int main(){
    struct emp e;
    printf("%u %u %u\n", &e.a, &e.ch, &e.s);
    // It prints address of the structure variables.

    return 0;
}