#include <iostream>
#include <vector>

bool hasUniqueDigits(int number) {
    if (number < 0) {
        number = -number; 
    }
    std::vector<bool> seen(10, false);

    while (number > 0) {
        int digit = number % 10;
        if (seen[digit]) {
            return false; 
        }
        seen[digit] = true;
        number /= 10;
    }
    return true; 
}

int main() {
    int year;
    std::cin >> year;

    while (true) {
        year++;
        if (hasUniqueDigits(year)) {
            std::cout << year << std::endl;
            break;
        }
    }

    return 0;
}
