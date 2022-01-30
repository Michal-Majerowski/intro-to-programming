#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int {
    auto init = std::stoi(argv[1]);
    auto i = 1;
    while (i <= init) {
        std::cout << i << "... ";
        if (i%3 == 0) {
            std::cout << "Fizz";
        }
        if (i%5 == 0) {
            std::cout << "Buzz";
        }
        std::cout << "\n";
        i++;
    }
}
