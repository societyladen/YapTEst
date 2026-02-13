
#include <iostream>
int maxdigital(int x){// рекурсия на спуске
    int s = 3;
    if (x == 0) {
        return 0;
    } else {
        if (s < (x % 10)) {
            s = x % 10;
            maxdigital(x / 10);
        } else {
            return s;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int number = 0;
    int summ = 0;
    std::cout << "Введите натуральное число: " << std::endl;
    std::cin >> number;
    //проверка числа
    //проверить натуральность
    if (number < 0) {
        std::cerr << "Ошибка x < 0";
        return 1;
    }
    summ = maxdigital(number);
    std::cout << "Сумма цифр числа: " << summ << std::endl;;
    return 0;
}
