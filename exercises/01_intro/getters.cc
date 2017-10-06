#include <iostream>
#include <limits>

#define MAX_TRIALS 5

int get_int();
double get_double();

int main() {
    int a = get_int();
    double b = get_double();

    std::cout << "---------------------\n";

    std::cout << "Selected int: " << a << "\n";
    std::cout << "Selected double: " << b << "\n";
}

int get_int() {
    int myInt;

    std::cout << "Please, insert an integer: ";
    for (int i = 0; i < MAX_TRIALS; i++) {
        std::cin >> myInt;
        if (std::cin.fail()) {
            std::cout << "Try again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    return myInt;
}

double get_double() {
     double myDouble;
 
     std::cout << "Please, insert a double: ";
     for (int i = 0; i < MAX_TRIALS; i++) {
         std::cin >> myDouble;
         if (std::cin.fail()) {
             std::cout << "Try again: ";
             std::cin.clear();
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         } else {
             break;
         }
     }
 
     return myDouble;
 }
