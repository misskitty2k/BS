#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "Угадай число от 1 до 100: ";

    while (guess != number) {
        std::cin >> guess;
        if (guess < number) {
            std::cout << "to low. Попробуй еще раз: ";
        }
        else if (guess > number) {
            std::cout << "to more. Попробуй еще раз: ";
        }
        else {
            std::cout << "win! Вы угадали число.\n";
        }
    }

    return 0;
}