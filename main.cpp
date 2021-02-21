#include <iostream>
using namespace std;

int fibonacci (int);
int main() {
    int b;
    std::cout << "Введите номер в последовательности Фибоначчи: " << std::endl;
    cin >> b;
    cout << fibonacci(b) << std::endl;
    return 0;
}
int fibonacci (int index) {
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    return fibonacci(index-1) + fibonacci(index-2);
}
