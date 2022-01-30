#include <iostream>
#include <random>
#include <string>

auto main() -> int {
    std::random_device rd;
    std::uniform_int_distribution <int> d100 (1, 100);
    auto const rand = d100(rd);
    auto n = std::string{};
    std::cout << "Guess: ";
    std::getline(std::cin, n);
    int a = std::stoi(n);

    do {
        if (a > rand) {

        std::cout << "Too big.\nGuess: ";
        std::getline(std::cin, n);
        a = std::stoi(n);

        } else if (a < rand) {

        std::cout << "Too small.\nGuess: ";
        std::getline(std::cin, n);
        a = std::stoi(n);

        }
    }
    while (std::stoi(n) != rand);
    std::cout << "Just right!\n";
}
