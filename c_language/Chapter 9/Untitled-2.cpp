#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

namespace Conversion {

    // Function to convert decimal to binary
    string decimalToBinary(int num) {
        stringstream ss;
        while (num > 0) {
            ss << (num % 2);
            num /= 2;
        }
        string binary = ss.str();
        reverse(binary.begin(), binary.end());
        return binary;
    }

    // Function to convert decimal to octal
    std::string decimalToOctal(int num) {
        std::stringstream ss;
        while (num > 0) {
            ss << (num % 8);
            num /= 8;
        }
        std::string octal = ss.str();
        std::reverse(octal.begin(), octal.end());
        return octal;
    }

    // Function to convert decimal to hexadecimal
    std::string decimalToHexadecimal(int num) {
        std::stringstream ss;
        while (num > 0) {
            int rem = num % 16;
            if (rem < 10) {
                ss << rem;
            } else {
                char hexChar = 'A' + (rem - 10);
                ss << hexChar;
            }
            num /= 16;
        }
        std::string hexadecimal = ss.str();
        std::reverse(hexadecimal.begin(), hexadecimal.end());
        return hexadecimal;
    }

    // Function to convert binary, octal, or hexadecimal to decimal
    int baseToDecimal(std::string num, int base) {
        int decimal = 0;
        int power = 1;
        for (int i = num.length() - 1; i >= 0; --i) {
            int digit;
            if (num[i] >= '0' && num[i] <= '9') {
                digit = num[i] - '0';
            } else if (num[i] >= 'A' && num[i] <= 'F') {
                digit = num[i] - 'A' + 10;
            } else {
                std::cout << "Invalid input for base conversion." << std::endl;
                return -1;
            }
            if (digit >= base) {
                std::cout << "Invalid digit for the specified base." << std::endl;
                return -1;
            }
            decimal += digit * power;
            power *= base;
        }
        return decimal;
    }
}

int main() {
    using namespace Conversion;

    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string binary = decimalToBinary(decimalNumber);
    string octal = decimalToOctal(decimalNumber);
    string hexadecimal = decimalToHexadecimal(decimalNumber);

    cout << "Binary: " << binary << endl;
    cout << "Octal: " << octal << endl;
    cout << "Hexadecimal: 0x" << hexadecimal << endl;

    string inputNum;
    int base;
    cout << "Enter a number in binary, octal, or hexadecimal: ";
    cin >> inputNum;
    cout << "Enter the base (2 for binary, 8 for octal, 16 for hexadecimal): ";
    cin >> base;

    int convertedDecimal = baseToDecimal(inputNum, base);
    if (convertedDecimal != -1) {
        cout << "Decimal equivalent: " << convertedDecimal << endl;
    }

    return 0;
}
