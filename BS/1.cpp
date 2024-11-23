#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "������ ����� �� 1 �� 100: ";

    while (guess != number) {
        std::cin >> guess;
        if (guess < number) {
            std::cout << "to low. �������� ��� ���: ";
        }
        else if (guess > number) {
            std::cout << "to more. �������� ��� ���: ";
        }
        else {
            std::cout << "win! �� ������� �����.\n";
        }
    }

    return 0;
}