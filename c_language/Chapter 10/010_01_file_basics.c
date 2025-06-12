#include <stdio.h>

int main(){
    FILE *ptr;

    ptr = fopen("sample.txt", "r"); //--→ for reading the file
    // ptr = fopen("sample.txt", "w"); //--→ for writing to a file

    // ptr = fopen("sample2.txt", "r"); //--→ for reading the file
    ptr = fopen("sample2.txt", "w"); //--→ for writing to a file

    // fopen of "w", creates also a file which we did not make.
    // But fopen of "r", does not creates a file which we did not make.
    return 0;
}