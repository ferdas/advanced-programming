#include <iostream>

#define CONST 39.3700787

double m2in(double);
double in2m(double);

int main() {
    double module;
    std::string unit;

    std::cout << "Insert the measure to convert: ";
    std::cin >> module >> unit;

    if (unit == "m") {
        std::cout << m2in(module) << "in\n";
    } else if (unit == "in") {
        std::cout << in2m(module) << "m\n";
    } else {
        std::cout << "Unit not recognized\n";
    }
}

double m2in(double a) {
    return a * CONST;
}

double in2m(double a) {
    return a / CONST;
}
