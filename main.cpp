#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

int main() {
    double x = 2.675;
    double x_rounded = std::round(x * 100.0) / 100.0;
    std::cout << x_rounded << std::endl;

    std::srand(std::time(0));
    int rand = std::rand() % 10 + 1;
    std::cout << rand << std::endl;

    return 0;
}