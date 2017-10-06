#include <iostream>

#define MAX_LEN 70

int main() {
    int counter{0};
    int wordlen{0};
    std::string word;

    while(std::cin >> word) {
        //std::cout << word;
        wordlen = word.length();

        if ((counter + wordlen) < MAX_LEN) {
            std::cout << word << " ";
            counter += wordlen;
        } else {
            std::cout << "\n" << word;
            counter = wordlen;
        }
    }
}
