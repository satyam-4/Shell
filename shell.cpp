#include <iostream>
#include <string>

int main() {
    std::string input;

    while (true) {
        // prompt
        std::cout << "$";
        std::getline(std::cin, input);

        // skip empty input
        if (input.empty()) continue;

        // exit condition
        if (input == "exit") {
            break;
       }
    }
}