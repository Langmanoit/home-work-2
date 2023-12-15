
#include <iostream>
#include <cstring>

void countletters(const char* str, int& numL, int& numD, int& numO) {
    numL = 0;
    numD = 0;
    numO = 0;

    while (*str != '\0') {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            numL++;
        } else if (*str >= '0' && *str <= '9') {
            numD++;
        } else {
            numO++;
        }
        str++;
    }
}

int main() {
    const char* str = "abcdef 12453325";
    int numL = 0;
    int numD = 0;
    int numO = 0;

    countletters(str, numL, numD, numO);

    std::cout << numL << std::endl;
    std::cout <<  numD << std::endl;
    std::cout <<  numO << std::endl;

    return 0;
}