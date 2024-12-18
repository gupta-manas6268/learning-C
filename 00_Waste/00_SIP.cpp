#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to convert decimal to binary
void decimalToBinary(int n){
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // Print binary number in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

// Function to convert binary to decimal
int binaryToDecimal(int n){
    int decimal = 0, base = 1, rem;
    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        n = n / 10;
        base = base * 2;
    }
    return decimal;
}

// Function to convert decimal to octal
void decimalToOctal(int n){
    int octalNum[32];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    // Print octal number in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
    printf("\n");
}

// Function to convert octal to decimal
int octalToDecimal(int n){
    int decimal = 0, base = 1, rem;
    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        n = n / 10;
        base = base * 8;
    }
    return decimal;
}

// Function to convert hexadecimal to binary
void hexToBinary(char hex[]){
    int i = 0;
    while (hex[i]) {
        switch (hex[i]) {
            case '0': printf("0000"); break;
            case '1': printf("0001"); break;
            case '2': printf("0010"); break;
            case '3': printf("0011"); break;
            case '4': printf("0100"); break;
            case '5': printf("0101"); break;
            case '6': printf("0110"); break;
            case '7': printf("0111"); break;
            case '8': printf("1000"); break;
            case '9': printf("1001"); break;
            case 'A': case 'a': printf("1010"); break;
            case 'B': case 'b': printf("1011"); break;
            case 'C': case 'c': printf("1100"); break;
            case 'D': case 'd': printf("1101"); break;
            case 'E': case 'e': printf("1110"); break;
            case 'F': case 'f': printf("1111"); break;
            default: printf("\nInvalid hexadecimal digit %c", hex[i]);
        }
        i++;
    }
    printf("\n");
}

// Function to convert binary to hexadecimal
void binaryToHex(long long binary){
    int hex[1000];
    int i = 0, decimal = 0, rem, base = 1;
    
    // Binary to Decimal conversion
    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }
    
    // Decimal to Hexadecimal conversion
    while (decimal != 0) {
        hex[i] = decimal % 16;
        decimal = decimal / 16;
        i++;
    }
    
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        if (hex[j] > 9) 
            printf("%c", hex[j] + 55); // Convert to A-F
        else 
            printf("%d", hex[j]);
    }
    printf("\n");
}

int main(){ 
    int decimal, binary, octal;
    char hex[20];
    
    // Decimal to Binary
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary equivalent: ");
    decimalToBinary(decimal);
    
    // Binary to Decimal
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    
    // Decimal to Octal
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Octal equivalent: ");
    decimalToOctal(decimal);
    
    // Octal to Decimal
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("Decimal equivalent: %d\n", octalToDecimal(octal));
    
    // Hexadecimal to Binary
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    printf("Binary equivalent: ");
    hexToBinary(hex);
    
    // Binary to Hexadecimal
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    binaryToHex(binary);
    
    return 0;
}
