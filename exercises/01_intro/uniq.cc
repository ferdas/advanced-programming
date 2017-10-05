#include <iostream>

int main(){
    std::string prevline;
    std::string line;

    while(std::getline(std::cin, line)) {
        if (line != prevline) {
            std::cout << line << '\n';
        }
        prevline = line;
    }

    return 0;
}
